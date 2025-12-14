/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240794
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)111))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
            var_16 -= ((/* implicit */unsigned int) (signed char)15);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_17 ^= arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0];
                            var_18 -= ((/* implicit */unsigned int) (unsigned char)96);
                            var_19 *= ((/* implicit */signed char) ((_Bool) (short)8817));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(min((var_13), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))))))));
                            var_21 = 14239746322270472372ULL;
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((4287096839694120319ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
        arr_16 [i_5] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) -1LL))))))) >> (((max((((/* implicit */long long int) max((var_14), (((/* implicit */int) (signed char)105))))), (max((((/* implicit */long long int) var_5)), (var_7))))) - (7312736361940900017LL)))));
    }
    var_24 = ((/* implicit */unsigned int) (~(var_0)));
    var_25 -= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_11)) | ((((_Bool)1) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (signed char)76))))))), (max((4108511179521676945LL), (((/* implicit */long long int) (_Bool)1))))));
}
