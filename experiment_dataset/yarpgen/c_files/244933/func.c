/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244933
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) var_14)));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) var_2);
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) * (((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_1])), (arr_2 [(signed char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_10)))))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((short) arr_1 [i_0])), (((/* implicit */short) (_Bool)1))))) ? (max((((((/* implicit */unsigned int) var_14)) ^ (var_7))), (((/* implicit */unsigned int) ((arr_1 [i_0]) & (arr_1 [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_2 + 1])) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_8)))))))))))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_20 ^= ((/* implicit */signed char) (+(((long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((short) (_Bool)1));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) <= (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    var_22 -= ((/* implicit */unsigned long long int) (unsigned char)255);
                }
                arr_14 [i_1] = ((/* implicit */unsigned int) (~((~(var_3)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_23 = arr_9 [i_1] [(signed char)7] [i_5] [i_1];
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((arr_1 [i_6 + 1]) >> (((arr_1 [i_6 - 1]) - (2017590205))))), (((((/* implicit */_Bool) 2592639024U)) ? (arr_1 [i_6 + 1]) : (arr_1 [i_6 - 2])))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_10))))))));
                            arr_22 [10ULL] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_5] [i_0]))))))) | (((((/* implicit */unsigned long long int) arr_4 [i_6 - 2] [i_1])) / (var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_5);
    var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((((var_2) >= (var_2))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 9223372036854775789LL)))) : (var_3))) : (((long long int) (~(((/* implicit */int) var_6)))))));
}
