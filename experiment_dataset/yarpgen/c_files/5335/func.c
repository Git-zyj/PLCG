/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5335
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) var_0);
                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)1] [i_0] [i_0])) && ((_Bool)0))))));
                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0]))))) % ((~(arr_2 [14U] [i_0] [13U])))))) || ((!(((/* implicit */_Bool) arr_3 [(signed char)6] [(unsigned char)5]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            {
                arr_9 [i_3] [i_3 + 2] [i_2] = max((((/* implicit */unsigned int) (+((+(1)))))), (0U));
                arr_10 [i_2] [14U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((signed char)36), (arr_7 [i_3 + 2] [i_3])))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [11U] [i_3]))) / (arr_5 [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_17 [(signed char)20] [i_3] [(short)20] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (max((-2026738400), (((/* implicit */int) (unsigned char)8))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [(_Bool)1])), (6073166789933922622ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [18LL] [i_3])) && (((/* implicit */_Bool) arr_13 [i_2] [(unsigned char)2] [(signed char)17] [i_5]))))) : (-1079756459)))) : (((unsigned int) ((signed char) var_9)))));
                            var_18 = arr_15 [i_2] [i_2];
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_11 [i_2] [15] [(signed char)22]))))), (((unsigned char) -2026738407)))))));
                            arr_18 [i_2] [(_Bool)1] [i_4] [(_Bool)1] [i_2] [(_Bool)1] = 2147483647;
                        }
                    } 
                } 
                var_20 &= min(((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)38)), (var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -41052865))))));
                arr_19 [(signed char)1] [18LL] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)239));
            }
        } 
    } 
}
