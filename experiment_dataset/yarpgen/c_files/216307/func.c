/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216307
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [14] [i_0] = ((/* implicit */_Bool) ((max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) arr_1 [i_0]))))))) * (((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))) / (var_7))) * (((arr_0 [i_0] [17ULL]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [3] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2 - 2]) : (arr_6 [i_0] [i_0] [(short)21]))) <= (((/* implicit */long long int) arr_7 [i_3] [i_1]))));
                            arr_11 [14U] [14U] [i_1] [14U] = min((((/* implicit */short) (_Bool)1)), ((short)-27));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_17 [i_4] [(_Bool)1] [(unsigned char)15] [9ULL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))), (((var_1) & (((/* implicit */unsigned long long int) arr_0 [i_0] [13ULL]))))));
                            arr_18 [i_4] [i_4] [i_1] [i_4] = ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (max((arr_10 [i_0] [i_0] [17U] [i_5]), (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(signed char)1] [12]))))))) * (min((((/* implicit */unsigned long long int) ((signed char) arr_6 [14U] [14U] [14U]))), (min((var_1), (((/* implicit */unsigned long long int) 5663906578130729698LL)))))));
                            arr_19 [9ULL] [9ULL] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max((((unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_1])), (((/* implicit */unsigned long long int) arr_5 [i_0] [13ULL] [i_1] [i_0]))));
                        }
                    } 
                } 
                arr_20 [i_0] [12] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)7))) >= (2842419880767596444LL)))), (-9223372036854775797LL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_16 [i_7])), (18446744073709551615ULL)));
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_8] [i_7] [i_7] [i_6])) & (((/* implicit */int) (_Bool)0)))) | ((~(((((/* implicit */int) (short)17348)) | (((/* implicit */int) (unsigned char)31))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) var_2))));
}
