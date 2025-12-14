/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49830
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
    var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-25550)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-89)), ((unsigned char)251)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned char)51)))))))));
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)-123)), ((unsigned char)96)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 += ((/* implicit */_Bool) ((unsigned char) max((max(((unsigned char)131), ((unsigned char)120))), (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_9 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            arr_12 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)25557)), ((-(((/* implicit */int) (unsigned char)128))))));
                            arr_13 [i_0] [i_4] [(unsigned short)17] [i_4] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)5)) >> (((((/* implicit */int) var_4)) - (48))))) != (((/* implicit */int) arr_5 [(unsigned char)4]))));
                            arr_14 [i_0] [i_4 + 1] [i_0] [i_0] [i_4 + 1] [i_3] = ((/* implicit */_Bool) var_5);
                            var_15 = max((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) > (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (unsigned char)205)) ? (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_4 + 1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_3)))))));
                            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) var_4))))))) ? ((~(((/* implicit */int) max((arr_6 [i_0]), ((unsigned char)255)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)13)))) > (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-81)))))))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_5] [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_2]), (arr_15 [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1] [i_5 + 1] [i_0])))) ? (((/* implicit */int) ((unsigned char) (unsigned short)34586))) : ((+(((/* implicit */int) (unsigned char)114))))));
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (max(((unsigned short)32736), (((/* implicit */unsigned short) (signed char)58))))))) ? ((~(((/* implicit */int) (unsigned short)33790)))) : (var_2)));
                            arr_17 [i_0] [i_3] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 1])) || (((/* implicit */_Bool) var_1))))), (((signed char) var_11))))) & (((/* implicit */int) ((signed char) (unsigned char)238)))));
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_2] = max(((unsigned char)106), (((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)195)))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            var_19 = (!(((/* implicit */_Bool) (unsigned char)217)));
                            arr_21 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) (unsigned short)32811)) : ((-(((/* implicit */int) (unsigned short)57321))))));
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                        }
                        var_21 = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_2] [i_2]), ((unsigned char)0)))) || (((/* implicit */_Bool) max(((unsigned char)137), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        arr_22 [i_2] [i_3] [(unsigned char)7] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) (unsigned char)4);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_8))))))));
    }
}
