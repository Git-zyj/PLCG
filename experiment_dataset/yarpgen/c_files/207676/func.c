/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207676
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_14 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (var_1))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_1)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (0U))))))));
        var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_4 [i_1]), (arr_4 [i_1])))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (4985609183386714194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))));
        var_16 = min((min((var_9), (((/* implicit */unsigned int) arr_3 [i_1])))), (((/* implicit */unsigned int) arr_3 [i_1])));
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 345349176)) * (arr_5 [i_1]))))));
        arr_7 [i_1] [i_1] = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) - (4294967295U)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_12 [(_Bool)1] = ((/* implicit */int) arr_4 [i_2]);
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) 17839106880528539853ULL))));
    }
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) 16598812132991080960ULL);
        var_19 += ((/* implicit */unsigned int) (+(arr_13 [i_3 + 1])));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_19 [i_3] [i_3] [i_4] = ((/* implicit */short) max(((+(562949953421312LL))), (((/* implicit */long long int) max((arr_17 [i_3 + 2]), (arr_17 [i_3 + 4]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 18; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_28 [i_3]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_3])) & ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)21)) == (((/* implicit */int) arr_28 [i_3 + 3])))))))));
                            var_22 &= ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)23898))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned short)19260))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
        {
            arr_34 [i_8] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) 0U)), (arr_26 [i_3] [i_3] [i_3] [i_3]))));
            var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_31 [i_3] [i_3] [i_8] [(unsigned char)5] [i_8])))) - (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)32373))))))), (min((max((4294967285U), (((/* implicit */unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) (unsigned char)22))))));
        }
        for (int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (unsigned short)65521)))))));
            var_26 = (+((+(min((((/* implicit */unsigned int) arr_15 [i_3])), (793201175U))))));
        }
    }
}
