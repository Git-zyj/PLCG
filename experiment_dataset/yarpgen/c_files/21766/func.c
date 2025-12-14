/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21766
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 18446744073709551615ULL))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((9008664924308273625ULL) <= (((/* implicit */unsigned long long int) 4040409473U)))))));
                        arr_8 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9008664924308273630ULL)))) : (((((/* implicit */_Bool) 1114121333)) ? (7840760755673629359ULL) : (((/* implicit */unsigned long long int) -666464815))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [(unsigned char)2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((_Bool) arr_4 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_5 + 1] [i_5 + 2] [i_5] [i_5 - 4] [i_5 + 1] [i_5])) : (13687852636380630974ULL)));
                            arr_16 [i_5 + 1] [i_4] [16U] [13] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_1]))));
                            var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (unsigned short)57445))))));
                            var_20 = ((/* implicit */unsigned char) ((((_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_5 - 3] [i_5 + 3])) : (((/* implicit */int) var_10))));
                        }
                        for (short i_6 = 4; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_1] [10ULL] [10ULL] [13U] [i_6]);
                            arr_21 [i_0] [4ULL] [i_2] [i_4] [i_6] = ((/* implicit */unsigned int) min((9008664924308273620ULL), (((/* implicit */unsigned long long int) (short)-2048))));
                            var_21 -= ((/* implicit */short) min((arr_3 [i_1] [(_Bool)1]), (((/* implicit */signed char) var_0))));
                        }
                        var_22 *= min((((min((((/* implicit */unsigned int) -666464827)), (8126464U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2]))))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (short)4458)) : (((/* implicit */int) (unsigned short)8097)))), ((~(-666464827)))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_16))))))));
    var_24 += (+(666464826));
}
