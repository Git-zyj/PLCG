/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48837
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)96);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((unsigned short) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [(unsigned char)9] [i_3] [i_4 + 1] [10ULL] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-111)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))) + (((unsigned long long int) (unsigned char)121))));
                                var_16 = (-(arr_8 [i_4 + 1] [i_4 + 1] [i_2] [i_3] [i_4] [i_2]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (13179860632613900202ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)15366)) % (((/* implicit */int) arr_18 [i_0] [i_6])))) + (((/* implicit */int) arr_18 [i_0] [i_6]))));
                                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_19 [i_7]))))) | (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_7]))))), (max((2867040526741830762ULL), (((/* implicit */unsigned long long int) arr_20 [i_7]))))))));
        var_22 = ((/* implicit */unsigned char) arr_19 [i_7]);
        var_23 = ((/* implicit */signed char) (unsigned short)3840);
        arr_22 [i_7] = (signed char)-113;
    }
}
