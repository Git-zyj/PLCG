/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48086
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
    var_20 = ((/* implicit */int) (-(max((max((((/* implicit */unsigned long long int) (unsigned short)7597)), (2483752000758173374ULL))), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) -1818141749);
        var_22 -= ((/* implicit */unsigned short) max((max((((long long int) var_18)), (((/* implicit */long long int) (unsigned short)9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((arr_1 [(_Bool)1]), (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | ((~(((/* implicit */int) (unsigned char)240))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -5160835549347276219LL)))))));
                        }
                        var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((48484619) == (var_11)))) >> (((((((/* implicit */_Bool) 7700470037912725763LL)) ? (var_10) : (var_19))) + (7823604243453799378LL)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_3);
                arr_15 [i_0] [i_0] [(unsigned char)13] [i_1] = ((((/* implicit */_Bool) var_17)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_11)));
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_26 |= var_0;
                arr_18 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
            }
        }
        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_15)))));
    }
    var_28 = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (((((/* implicit */_Bool) (unsigned short)61428)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : (var_14)))));
}
