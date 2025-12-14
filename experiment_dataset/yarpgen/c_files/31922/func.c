/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31922
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
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_12 ^= ((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [(signed char)18])))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_13 |= arr_4 [(unsigned short)19] [i_3] [i_4];
                                arr_13 [17ULL] [i_1] [i_2] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((_Bool) (unsigned short)0)))))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_8 [i_0] [i_1] [i_2])))))));
                                arr_14 [i_0] [(signed char)6] [i_2] [i_0] [i_4] = ((/* implicit */signed char) var_4);
                            }
                            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                            {
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_3 [(unsigned short)14])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_10 [14ULL] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)59550))))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((432829981546165372LL), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), ((unsigned short)17774)))) ? (11676451466169549780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
                            }
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */_Bool) (short)(-32767 - 1));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = var_5;
    var_18 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)4)));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_18 [(_Bool)1])))));
        var_20 = var_1;
    }
}
