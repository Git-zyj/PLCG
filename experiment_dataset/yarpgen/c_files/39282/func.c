/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39282
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_10 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */short) arr_4 [i_0 - 2] [i_1 + 1]);
                        var_15 = ((/* implicit */short) arr_4 [i_1] [i_2]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16087)) ? (((/* implicit */int) (unsigned short)15256)) : (((/* implicit */int) (unsigned short)49448))));
                            arr_14 [i_0 + 1] [i_1 - 1] [13] [(_Bool)1] [i_4] = ((/* implicit */signed char) var_1);
                            arr_15 [i_0 - 2] [1LL] [0LL] [i_3] [(_Bool)1] = ((/* implicit */short) min((max((max((var_6), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(arr_12 [(signed char)7] [i_4] [i_4] [(_Bool)1] [i_4])))) > (((var_12) ? (-5130692070725688491LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49448))))))))));
                        }
                        arr_16 [i_0 + 1] [(_Bool)1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 1] [i_0 - 2] [i_1 - 1] [i_3])) : (((((/* implicit */_Bool) -8388608)) ? (5491086126187433545ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6019))))))), (((/* implicit */unsigned long long int) ((signed char) min((1331409743), (((/* implicit */int) (signed char)22))))))));
                    }
                    var_16 = ((/* implicit */unsigned char) ((_Bool) -1331409744));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                arr_22 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) arr_19 [(unsigned short)4]))))), (max((var_11), (((/* implicit */unsigned long long int) arr_18 [i_5])))))))));
                var_17 = ((/* implicit */signed char) ((arr_20 [i_5] [11]) ? (((((/* implicit */_Bool) -1331409744)) ? (0ULL) : (5823275779690793035ULL))) : (((/* implicit */unsigned long long int) (+(arr_18 [i_5]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((var_11) & (var_6)));
}
