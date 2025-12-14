/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39101
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) >= (((((/* implicit */int) (short)1784)) & (((/* implicit */int) var_10))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_2 [i_1]);
                var_22 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (unsigned short)10418)), (max((((/* implicit */unsigned long long int) 549755813887LL)), (12550382943076039213ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0])), ((~(arr_0 [i_1]))))))));
                arr_6 [(unsigned char)7] [i_0] = min(((+(((/* implicit */int) ((unsigned char) (short)-9301))))), ((-(((/* implicit */int) ((short) (short)9312))))));
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-9289)) : (((/* implicit */int) ((18303817075753688929ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_23 ^= ((/* implicit */unsigned long long int) (+((~(arr_0 [i_2 - 1])))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-9301)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9303))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1716806053U)) ? (((/* implicit */long long int) arr_12 [i_4] [i_3])) : (-922339207197973447LL)))), (min((var_17), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 3903286049365578302LL))) != (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) > (((/* implicit */int) (unsigned char)209))))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_21 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (short)-9289)))))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                var_25 = (!(((/* implicit */_Bool) ((long long int) (signed char)63))));
                var_26 ^= ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    for (signed char i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((~(arr_28 [i_3] [i_4] [(unsigned short)3] [i_3] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9296)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_7] [i_7]))) / (25ULL)))) ? (((/* implicit */int) arr_14 [i_7 + 1] [i_8 + 2] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) 13LL))))))) : (((/* implicit */int) arr_16 [i_3] [i_7 - 2] [i_3] [i_9]))));
                                var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_16 [i_9] [i_3] [i_3] [i_3])))))))));
                                var_29 = ((/* implicit */unsigned char) (~((+(max((((/* implicit */long long int) (short)32767)), (7LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (-(-1725580446707510189LL)))), ((-(18303817075753688929ULL))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)0)))), (((/* implicit */int) min((var_12), (var_18)))))))));
}
