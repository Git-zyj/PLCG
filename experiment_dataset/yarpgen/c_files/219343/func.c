/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219343
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
    var_11 += ((/* implicit */unsigned short) (-((+(var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [(signed char)6] [i_0] = ((/* implicit */signed char) min((min((arr_2 [i_2 + 1]), (((/* implicit */long long int) arr_5 [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0])))))));
                    var_12 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * ((+(((/* implicit */int) (unsigned char)243))))))) + ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)0]))) / (var_0)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2 + 1] [i_2 + 1])), (arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_4 [i_0] [i_2 + 2] [i_2 - 1])))))));
                    arr_11 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_9))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3]);
                    arr_20 [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_13 [i_5] [i_5]))) == (((/* implicit */int) (((~(var_0))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (var_10)))))))));
                    var_13 = ((/* implicit */unsigned short) arr_17 [i_3] [i_3 + 4] [i_3 + 4] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_10);
                                arr_25 [i_7] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~((+(-1555292135)))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_2))), (min((var_0), (((/* implicit */unsigned long long int) arr_13 [(unsigned short)10] [17]))))))) ? (((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(short)3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -1555292134)))) : (((((/* implicit */unsigned long long int) arr_13 [(signed char)8] [i_4])) & (var_5))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_4] [4ULL] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [16LL]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned short)6]))) % (arr_12 [(unsigned short)8])))))));
                }
            } 
        } 
        arr_26 [2LL] |= ((_Bool) (!(((/* implicit */_Bool) arr_24 [(unsigned char)4] [i_3] [(unsigned char)4] [i_3]))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) 4294967271U)) : (18406358486668862272ULL)));
}
