/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223380
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)31744))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_18)))))) : (((max((12246463581987676275ULL), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (var_8))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) var_17));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2290141950U)) ? (var_7) : (var_5)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)33792)))) : ((~(192))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (~(max((12246463581987676275ULL), (max((((/* implicit */unsigned long long int) (unsigned short)31744)), (17016544607945965447ULL)))))));
                    var_21 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_11)) / (11780068965285935237ULL)))))));
                    arr_10 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50342)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                                var_23 = ((/* implicit */unsigned short) var_5);
                                var_24 = ((/* implicit */unsigned char) ((signed char) 6200280491721875341ULL));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */long long int) 6488995900167314023ULL);
                                arr_27 [i_0] [i_1] [1ULL] [i_6 + 1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)186)))) <= (((/* implicit */int) ((short) var_8)))));
                                arr_28 [i_0] [i_1] [i_5] [i_6] [i_7] = min((((/* implicit */unsigned long long int) (~(((long long int) var_4))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744))) : (1430199465763586168ULL))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) (+((+(((unsigned int) var_4))))));
                    arr_29 [i_5] [i_5] = min(((~(12246463581987676301ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((int) var_15)) : (((/* implicit */int) ((unsigned char) 187)))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        arr_38 [i_9] [i_8] [i_1] [i_0] = ((/* implicit */short) var_6);
                        arr_39 [i_8] [i_8] [i_1] [i_9 - 1] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned short) (unsigned char)201);
                    }
                    for (signed char i_10 = 3; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_43 [i_10] [i_8] [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(-2036480425)))) + (((((/* implicit */_Bool) var_10)) ? (((unsigned int) (unsigned short)31744)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48691)))))));
                        var_26 = ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_7))) + (((/* implicit */long long int) ((int) 1662235615)))))) : (min((((unsigned long long int) 4102589275667859826ULL)), (((/* implicit */unsigned long long int) ((unsigned short) var_17))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        arr_47 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) > ((-2147483647 - 1))));
                        arr_48 [i_11] [i_8] [i_0] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)81)) ? (var_6) : (((/* implicit */long long int) var_11))))), (min((3029828667810113437ULL), (7735583639811465164ULL))))));
                        arr_49 [i_11] [i_8] [i_1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)23429))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (((_Bool)0) ? (var_7) : (((/* implicit */long long int) -1662235615)))))) ? ((~(((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1)))))))));
                            var_28 = ((/* implicit */unsigned int) (+(((unsigned long long int) (short)-19446))));
                        }
                        arr_56 [i_0] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1044873430914355194LL))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_17)), (6666675108423616378ULL))))) : (((int) (~(((/* implicit */int) (short)32767)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */int) (_Bool)1);
                            arr_59 [i_14] [i_12] [i_12] [i_12] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-13077))) == (var_10))));
                            arr_60 [i_0] [i_1] [i_8] [i_12] [(short)11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) * (((/* implicit */int) ((short) min((((/* implicit */int) (unsigned char)1)), (var_9)))))));
                            arr_61 [(signed char)17] [i_12] [i_8] [(signed char)17] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)223)))))) | ((+((~(((/* implicit */int) var_4))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            arr_65 [i_0] [i_1] [i_0] [i_12] [i_12] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 8918481807189252416LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : ((-(var_17))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 17016544607945965445ULL)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19398))))) >> (((((/* implicit */int) (unsigned short)16320)) - (16279))))), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_2))))));
                            arr_66 [i_0] [i_1] [i_8] [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1101795819)), ((((_Bool)1) ? (3606762912780411084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            var_31 = ((unsigned short) ((1693220048282618176ULL) << (((var_5) + (1227407127492835850LL)))));
                            var_32 = ((/* implicit */long long int) var_2);
                            arr_69 [i_16] [i_12] [i_8] [i_12] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)5)))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((unsigned long long int) (unsigned char)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL))))));
                    }
                    arr_70 [i_1] [i_0] = ((/* implicit */int) var_17);
                    arr_71 [i_0] [i_1] [i_1] [(unsigned short)4] = ((/* implicit */short) ((((int) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_11)) : (17016544607945965448ULL))) - (18446744072292610759ULL)))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        arr_76 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 17016544607945965448ULL)))));
                        arr_77 [i_0] [i_0] [i_0] [i_18] [i_17] = ((/* implicit */long long int) max((((unsigned int) ((unsigned int) var_10))), (((/* implicit */unsigned int) min((var_2), ((_Bool)1))))));
                        arr_78 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) var_11)) : (1430199465763586168ULL))))), (((12196458878836583668ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                    }
                    var_34 = ((/* implicit */int) (+(((((long long int) (unsigned short)27112)) << (((((/* implicit */int) var_4)) - (16899)))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -1101795828)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))))));
}
