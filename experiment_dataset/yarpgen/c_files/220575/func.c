/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220575
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) var_7);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (var_6) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3455216835U))))));
                        arr_9 [i_0] [i_0 - 1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_0 - 1] [i_0 - 1])))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_13)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : ((~(((/* implicit */int) (signed char)-78))))));
                            var_19 = ((/* implicit */unsigned short) ((signed char) var_14));
                        }
                        arr_13 [i_0] [i_0] [5LL] = ((/* implicit */_Bool) 2046308375U);
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */long long int) 1018368828303987400ULL);
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 3221225472U)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)124)), (var_3))))) & (arr_5 [i_5] [(unsigned short)7] [i_5]))) : (arr_4 [i_5] [i_5] [i_5] [i_5])));
        var_21 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_15 [i_5 + 1] [i_5])))) > (min((((/* implicit */int) ((unsigned char) var_14))), ((~(((/* implicit */int) arr_11 [i_5 + 1] [(signed char)2] [12U] [(_Bool)0]))))))));
        var_22 = ((/* implicit */int) var_14);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 3221225492U)) ? (((/* implicit */unsigned long long int) 1110108037U)) : (1018368828303987400ULL)));
                    arr_26 [i_6] [4U] [i_7] [(unsigned char)10] = ((/* implicit */signed char) var_14);
                }
            } 
        } 
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? ((+(((long long int) arr_15 [i_6 + 1] [i_6])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)20))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6 + 1])) && (((/* implicit */_Bool) var_5)))))) : ((+(3221225460U))))))));
    }
}
