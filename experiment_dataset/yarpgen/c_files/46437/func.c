/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46437
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
    var_11 ^= ((/* implicit */unsigned char) var_10);
    var_12 = ((/* implicit */unsigned short) var_10);
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(var_4)))), ((-(((((/* implicit */_Bool) 1045761726U)) ? (-20LL) : (219927225663554591LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [16U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14984323371076394LL))));
                var_14 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) min((arr_14 [i_1 - 4] [i_1 - 3] [i_3 - 2] [i_1 - 4] [i_3 - 1]), (arr_14 [i_1 + 1] [i_1 + 2] [i_3 + 1] [5U] [i_3 - 1])))) || ((!(((/* implicit */_Bool) arr_14 [i_1 + 3] [i_1 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_8 [(signed char)14] [i_1 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_8 [16U] [i_1 - 2] [i_3 - 2])) : (((/* implicit */int) arr_8 [(_Bool)1] [i_1 - 2] [i_3 - 2]))))));
                                arr_16 [11LL] [11LL] [(unsigned char)7] [i_3] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_0 [i_1 - 3])))))) >= (min((min((var_6), (((/* implicit */long long int) arr_5 [i_1] [i_1] [(signed char)16] [i_4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [(unsigned short)14] [i_0])) : (((/* implicit */int) var_7))))))));
                                var_16 = ((/* implicit */long long int) ((-4394538297752271743LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [(unsigned char)12] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65531)), (var_6)))) ? (((((/* implicit */_Bool) -1353770460432455029LL)) ? (1353770460432455010LL) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(signed char)15] [i_1 - 4]))))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
}
