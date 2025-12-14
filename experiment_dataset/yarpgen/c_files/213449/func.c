/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213449
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
    var_10 += ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_5);
        var_11 = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((arr_4 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [(_Bool)1])))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) arr_3 [i_1] [(short)0])))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)159))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_14 -= ((/* implicit */short) (signed char)4);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)38)) | (((/* implicit */int) var_5))))) ? ((-(arr_8 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1))))))))));
            var_16 = ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) max(((signed char)-103), (((/* implicit */signed char) (_Bool)1))))) & (((/* implicit */int) ((unsigned short) arr_8 [i_2])))))));
            var_17 = ((/* implicit */unsigned short) max((max((arr_7 [i_2 + 2]), (((/* implicit */int) ((unsigned char) (_Bool)1))))), (max((((/* implicit */int) max((arr_9 [i_3] [i_2] [i_2]), (var_2)))), ((+((-2147483647 - 1))))))));
            var_18 = ((/* implicit */unsigned short) var_8);
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_19 += ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)113)), (arr_7 [i_4])))) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_11 [i_2] [i_2]))))))), ((+(min((arr_7 [i_2]), (((/* implicit */int) (signed char)121))))))));
            var_20 = ((/* implicit */long long int) max((var_8), ((_Bool)1)));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)37227)))) ? (((/* implicit */int) arr_11 [i_2] [i_4])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (signed char)-119)) ? (min((((/* implicit */unsigned int) (unsigned short)49683)), (var_1))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)33482)))))))));
            arr_13 [i_2] [(_Bool)1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_7)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned short)28309)) / (var_9))))), (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            arr_17 [i_2] [i_2] [i_5] = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_2] [i_2] [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 3] [i_2]))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_27 [i_2] [i_2] = ((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)95)) / (626484178))), (((/* implicit */int) var_6)))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)239))));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [i_5] [i_5] [i_2] [(_Bool)1]))));
                            var_25 -= ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), ((unsigned char)35)));
                        }
                    } 
                } 
                arr_28 [i_2] = ((/* implicit */_Bool) ((arr_11 [i_2] [i_2]) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)239)) == (((/* implicit */int) (short)1594))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)239)) == (((/* implicit */int) (unsigned char)239))))), ((unsigned short)12778))))));
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_26 &= ((/* implicit */unsigned short) ((max((var_3), (arr_22 [i_9] [i_2 - 1]))) ? (((unsigned long long int) arr_26 [i_2 + 3] [i_2 + 2] [i_2 - 2])) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_1))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_40 [i_2] [i_5] [i_2] [i_5] [i_5] [i_5] = min((((/* implicit */unsigned short) min((((unsigned char) (unsigned short)27180)), (((/* implicit */unsigned char) var_5))))), (min((max((((/* implicit */unsigned short) var_4)), ((unsigned short)64632))), (((/* implicit */unsigned short) arr_26 [i_2] [i_2] [i_2])))));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((_Bool) 626484199)) || (((/* implicit */_Bool) (unsigned short)6391))))), (max(((unsigned char)4), (((/* implicit */unsigned char) var_2))))));
                        }
                    } 
                } 
            }
        }
    }
    var_28 &= ((/* implicit */unsigned int) (signed char)7);
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (1460616555))))));
}
