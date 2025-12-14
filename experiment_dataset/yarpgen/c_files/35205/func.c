/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35205
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6588)) % (((/* implicit */int) (unsigned short)6588))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) (((~(((/* implicit */int) min(((unsigned short)6603), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_3]))))))) < (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned short)65535))) < (((/* implicit */int) min((((/* implicit */unsigned short) (short)17461)), (var_4)))))))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */short) max((min(((unsigned short)58947), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_1])))), (var_4)));
                                var_20 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)14419)), (min(((unsigned short)6589), (((/* implicit */unsigned short) (short)14419))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34590)) + (((/* implicit */int) (unsigned short)6587))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_1])))) : (((/* implicit */int) var_15))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2])), (arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5]))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */short) arr_6 [i_1])), (arr_4 [i_1] [i_3] [i_5]))), (min((arr_7 [i_0] [i_1] [i_2] [i_0]), (arr_0 [i_0] [i_1])))))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_2] [i_3] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34591)) && (((/* implicit */_Bool) (unsigned char)56))))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)-14419))));
                            }
                            for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                var_24 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3])) * ((-(((/* implicit */int) (unsigned char)255))))));
                                var_25 = ((/* implicit */short) (+(((((/* implicit */int) max(((unsigned short)19033), (arr_18 [i_6] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0])))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_6])), ((unsigned short)4304)))) - (4299)))))));
                                var_26 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (max(((~(((/* implicit */int) arr_12 [i_0] [i_3] [i_0])))), (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 - 1])))) : (((/* implicit */int) arr_4 [i_0] [i_3] [i_6]))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                            {
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_2 - 1] [i_2])) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_7] [i_0])) : (((/* implicit */int) var_4)))) + (10802))))))));
                                var_28 += ((/* implicit */short) ((unsigned short) arr_3 [i_0]));
                            }
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned char) (short)32767))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58962))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0] [i_0]))))))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1] [i_1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_31 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                    var_32 &= ((/* implicit */unsigned short) (short)-21087);
                    var_33 = ((/* implicit */short) arr_1 [i_8] [i_1]);
                }
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_7)))))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_10))));
}
