/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22563
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
    var_16 = ((/* implicit */signed char) ((max((((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) > (((/* implicit */int) var_15))))), (((((/* implicit */int) (signed char)-18)) % (((/* implicit */int) (signed char)112)))))) >= (((/* implicit */int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)26)))) >= ((+(((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = arr_3 [i_0];
                        var_17 = ((/* implicit */short) ((signed char) (short)-13293));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) (((~((+(((/* implicit */int) (signed char)55)))))) < ((~(((/* implicit */int) (signed char)-112))))));
                            var_19 = ((unsigned char) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)22))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_6] [i_6] [i_6] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)35))));
                            arr_20 [i_2] [i_0] [i_2] [i_0] [i_6] [i_4] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (unsigned char)240))))));
                            arr_21 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((((/* implicit */int) (signed char)36)) - (36))))) > (((/* implicit */int) (signed char)33))));
                            arr_22 [i_0] [i_1] [i_0] [i_6] [i_6] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-18))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_1 + 4] [i_1] [i_1] [i_1 + 1]))));
                            arr_28 [i_7] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (signed char)112))) << (((((/* implicit */int) ((short) arr_4 [i_0]))) - (102)))));
                            arr_29 [i_1] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))));
                            arr_30 [i_0] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_26 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7])))));
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (short)25543))), ((-(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))))));
                        var_20 = ((/* implicit */short) (unsigned char)161);
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (short)5193)))))))));
                        var_22 = max((min(((short)32584), (arr_5 [i_0]))), (((/* implicit */short) ((signed char) (short)-21870))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */short) min((((unsigned char) min((((/* implicit */short) arr_14 [i_0] [i_1] [i_2] [i_2] [i_9])), (arr_15 [i_0] [i_1] [i_2] [i_9])))), (((/* implicit */unsigned char) arr_34 [i_1 - 1] [i_1 + 4] [i_1 - 2] [i_1 + 3]))));
                        var_23 = (short)32612;
                        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) ((short) (signed char)(-127 - 1)))))))));
                    }
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_9 [i_0]))))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (short i_11 = 2; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_26 = (unsigned char)63;
                                arr_43 [i_2] [i_11] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) max((arr_38 [i_0] [i_1] [i_2] [i_11]), (arr_15 [i_0] [i_0] [i_0] [i_0]))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_11] [i_11])))))))));
                                var_27 = ((/* implicit */short) (!(((((((/* implicit */int) arr_13 [i_10] [i_1] [i_2] [i_10] [i_11] [i_10] [i_11])) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) == ((+(((/* implicit */int) arr_26 [i_0] [i_10] [i_2] [i_10] [i_11] [i_0]))))))));
                                arr_44 [i_1] [i_1] [i_0] [i_10] [i_11] [i_2] [i_2] = ((/* implicit */signed char) max((min(((~(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_10] [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_2] [i_10] [i_11]))))))), (((((/* implicit */int) arr_32 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_1 - 1])) % (((/* implicit */int) arr_32 [i_11] [i_11 - 1] [i_11] [i_11 - 2] [i_1 + 3]))))));
                            }
                        } 
                    } 
                    arr_45 [i_0] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)25))))))) ? (((/* implicit */int) ((signed char) (short)-14626))) : ((((+(((/* implicit */int) arr_38 [i_0] [i_1] [i_1] [i_2])))) << (((((((/* implicit */int) arr_35 [i_1] [i_2] [i_2])) + (97))) - (4)))))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                {
                    arr_49 [i_12] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_1] [i_12])) && (((/* implicit */_Bool) (short)16991)))) ? ((-(((/* implicit */int) arr_32 [i_0] [i_1] [i_12] [i_12] [i_1])))) : (((/* implicit */int) (short)25528))));
                    var_28 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)0))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? ((+(((/* implicit */int) (short)-21869)))) : ((+(((/* implicit */int) (signed char)74))))));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) arr_33 [i_0] [i_1] [i_13] [i_14] [i_1 + 4]);
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_13] [i_14] [i_13])) < (((/* implicit */int) (unsigned char)255)))))));
                    }
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109))))) >> ((((~(((/* implicit */int) (short)25549)))) + (25555)))));
                }
                arr_56 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-119);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (signed char)31))))))))));
}
