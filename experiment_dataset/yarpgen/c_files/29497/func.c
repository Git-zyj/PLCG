/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29497
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
    var_10 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(var_6))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = max((min((((/* implicit */long long int) ((_Bool) var_5))), (min((((/* implicit */long long int) var_0)), (var_6))))), (((/* implicit */long long int) ((signed char) (~(var_6))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_11 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_7)), (var_5)));
                        var_12 = ((/* implicit */unsigned short) (+(((unsigned int) min((var_8), (var_9))))));
                    }
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((_Bool) var_3)) ? (min((((/* implicit */long long int) (signed char)127)), (8218455703862564239LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_7))))))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_14 ^= ((/* implicit */_Bool) var_2);
                        var_15 |= ((/* implicit */_Bool) ((unsigned int) ((_Bool) min((var_2), (((/* implicit */unsigned int) var_8))))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (-2678002502334681498LL) : (((/* implicit */long long int) 177187093U))))))) ? (((/* implicit */int) ((_Bool) max((var_2), (((/* implicit */unsigned int) var_1)))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)255)) : ((-2147483647 - 1))))));
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((var_9) ? (var_7) : (((/* implicit */int) var_9)))))))));
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) var_4);
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((short) var_8));
                        var_17 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (var_6)))) ? (var_7) : ((~(var_3)))))), (min((((/* implicit */long long int) (unsigned char)255)), (2624889595377982739LL)))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) max((((unsigned int) ((var_8) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_2)));
                        var_18 = ((/* implicit */unsigned char) min((((int) max((var_7), (((/* implicit */int) var_4))))), (max((var_3), ((-(((/* implicit */int) (unsigned char)100))))))));
                    }
                    arr_21 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((55089552), (((/* implicit */int) (_Bool)1))))))) ? (min((var_3), (var_3))) : (max((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-116)))))))));
                    arr_22 [i_1] = ((/* implicit */int) ((unsigned int) (unsigned short)932));
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
        {
            var_19 = ((unsigned int) var_6);
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)2183)) ? (((/* implicit */int) (short)-2183)) : (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((short) ((unsigned char) var_6)));
                            var_22 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) var_9)))));
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */unsigned long long int) (+(((unsigned int) var_2))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
        }
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((long long int) ((var_9) ? (((/* implicit */unsigned int) var_7)) : (var_5)))), (((/* implicit */long long int) (~(((var_8) ? (var_0) : (((/* implicit */int) var_1))))))))))));
                        arr_44 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] |= max((max((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (min((((/* implicit */unsigned int) var_0)), (var_2))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 2 */
                        for (short i_15 = 1; i_15 < 13; i_15 += 1) 
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((2833395025U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)-20129)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) min((max((var_0), (var_3))), (var_0))))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((var_3), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))))))))));
                        }
                        for (unsigned long long int i_16 = 3; i_16 < 13; i_16 += 3) 
                        {
                            var_28 = ((((/* implicit */_Bool) min((((/* implicit */int) ((short) var_0))), ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)));
                            var_29 += ((/* implicit */_Bool) (-(((unsigned int) min((((/* implicit */unsigned int) var_7)), (var_5))))));
                            var_30 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */long long int) (unsigned char)176)), (5562168079742944232LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)41))))))));
                            var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (min((max((((/* implicit */unsigned int) var_9)), (var_5))), (((/* implicit */unsigned int) ((unsigned short) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((short) var_5)))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((unsigned char)107), (((/* implicit */unsigned char) max((var_9), ((_Bool)1))))))), ((+(((unsigned long long int) 5562168079742944246LL)))))))));
                        var_33 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (max((var_0), (var_7)))))), (((unsigned int) max((var_6), (((/* implicit */long long int) var_4)))))));
                    }
                    for (short i_18 = 3; i_18 < 12; i_18 += 3) 
                    {
                        var_34 -= ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) min((var_9), (var_9)))), (max((((/* implicit */long long int) var_4)), (var_6))))));
                        var_35 = ((/* implicit */short) min((((/* implicit */int) var_1)), ((-((~(((/* implicit */int) var_8))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                        {
                            var_36 += ((/* implicit */short) max((min((2624889595377982733LL), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8218455703862564229LL))))), (((/* implicit */long long int) ((int) (-(var_7)))))));
                            var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_4))))) : (min((((/* implicit */long long int) var_4)), (var_6)))))), (((unsigned long long int) max((var_1), (((/* implicit */short) var_9)))))));
                        }
                        for (unsigned char i_20 = 2; i_20 < 13; i_20 += 4) 
                        {
                            arr_62 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (short)-20751)))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) var_9))));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (+(var_3))))));
                        }
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 14; i_21 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((var_9) ? (((int) var_4)) : (((/* implicit */int) var_4))));
                            var_41 = ((/* implicit */unsigned short) var_1);
                            var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((unsigned int) 2147483647)))))));
                        }
                    }
                    var_43 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_1), (var_1)))), (((var_9) ? (var_5) : (((/* implicit */unsigned int) var_7))))))) ? ((+(12U))) : (((/* implicit */unsigned int) ((int) min((var_2), (((/* implicit */unsigned int) var_8))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            for (long long int i_23 = 3; i_23 < 10; i_23 += 3) 
            {
                {
                    var_44 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))), (var_5)));
                    var_45 = ((/* implicit */signed char) var_2);
                    var_46 = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
                }
            } 
        } 
    }
    for (signed char i_24 = 1; i_24 < 17; i_24 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_25 = 1; i_25 < 17; i_25 += 2) 
        {
            for (short i_26 = 0; i_26 < 18; i_26 += 2) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_47 = ((/* implicit */signed char) min((var_47), (((signed char) ((short) min((var_8), (var_8)))))));
                        var_48 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) var_5))), (min((var_6), (var_6)))))) ? ((+(var_7))) : ((~((~(var_0)))))));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_8))))) ? (((int) var_9)) : (((/* implicit */int) ((signed char) var_4))))) : (((/* implicit */int) ((short) ((signed char) var_7))))));
                        var_50 = ((/* implicit */short) max((((/* implicit */long long int) var_7)), (max((-8218455703862564229LL), (((/* implicit */long long int) (short)-20751))))));
                        arr_82 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (min((((/* implicit */long long int) ((int) var_7))), (min((((/* implicit */long long int) var_1)), (var_6)))))));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((unsigned long long int) var_2)))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (max((min((min((((/* implicit */unsigned int) -359101345)), (4294967291U))), (((/* implicit */unsigned int) min((var_7), (var_7)))))), (((((/* implicit */_Bool) ((var_8) ? (var_3) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_4))))) : (max((var_5), (((/* implicit */unsigned int) var_9))))))))));
        var_53 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (min((max((var_6), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max((var_1), (((/* implicit */short) var_8)))))))));
        arr_83 [i_24] = ((/* implicit */short) var_2);
    }
    for (long long int i_28 = 1; i_28 < 21; i_28 += 1) 
    {
        var_54 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (-(((/* implicit */int) var_9))))));
        arr_88 [i_28] [i_28] = ((/* implicit */signed char) min((((unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)9703)), (2U)))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_1)))))))));
    }
    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((short) var_5))))) : (min((((/* implicit */unsigned int) ((_Bool) var_2))), ((+(var_2))))))))));
    var_56 = var_0;
    var_57 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (signed char)125))), ((-(((/* implicit */int) var_8))))));
}
