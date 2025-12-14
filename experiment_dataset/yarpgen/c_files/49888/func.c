/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49888
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))));
                var_16 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
                var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) | (var_7))));
                var_18 += (!((!(((/* implicit */_Bool) (unsigned short)65534)))));
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        {
                            var_19 = (-(((var_5) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36554))))));
                            arr_18 [i_0] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) (short)-27430));
                            arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) min((min((max((8714817828464854556LL), (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_7)) : (var_12))))), (((/* implicit */long long int) var_9))));
                            arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 3412657811U)) && (((/* implicit */_Bool) (unsigned short)65535))))) / (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_10), (((/* implicit */unsigned long long int) 134217216LL))))))) : (((unsigned int) ((((/* implicit */_Bool) (short)23277)) ? (0ULL) : (18446744073709551615ULL))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)3922))));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_1] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)6915)) - (6915)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27429)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)65535))))))))));
                    arr_27 [i_0] [i_1] [8ULL] [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27430)))))) : (min((63ULL), (((/* implicit */unsigned long long int) (short)27420)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((unsigned short) var_8))))))));
                    var_20 = ((/* implicit */unsigned int) (unsigned short)28969);
                }
                for (short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-19413))))), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27420))))))))))));
                    var_22 = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1)))))))));
                }
            }
            arr_30 [i_1] [i_1] = max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (unsigned short)32766)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27430))))))), (((/* implicit */unsigned int) min(((short)27429), (((/* implicit */short) var_1))))));
        }
        for (short i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            arr_33 [i_8] = ((/* implicit */_Bool) (short)-26372);
            var_23 = ((/* implicit */signed char) (-(min((((/* implicit */int) (unsigned short)54630)), (((((/* implicit */_Bool) (unsigned short)28986)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))))));
            arr_34 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -8744558722709389356LL)) ? (1683515929U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15855))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned long long int) var_7)) : (5881857876582339613ULL))))))));
        }
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_3)) ? (var_14) : (var_4))), (var_4))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)56216)) - (56214)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28982)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)27430), (((/* implicit */short) (signed char)31))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_11)))) << (((min((((/* implicit */long long int) 1976993918U)), (var_12))) + (304915219041529864LL)))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 301446853U)) : (12564886197127212003ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_7))))))));
                        var_26 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) ((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_12))));
                        arr_43 [i_0] [i_9] |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)-12328)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)27664)))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 14195351545866440746ULL)) ? (5029380801476237338ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28966)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 2) 
            {
                {
                    arr_48 [i_0] [i_12] = ((min((((((/* implicit */unsigned long long int) var_4)) / (5881857876582339613ULL))), ((~(var_10))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)27664), (((/* implicit */unsigned short) (_Bool)1)))))))) + (304915219041529861LL)))));
                    var_29 = ((/* implicit */unsigned short) min((max((var_14), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109)))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
    {
        arr_52 [i_14] [i_14] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        arr_53 [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (814833167U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        arr_54 [i_14] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)27664), ((unsigned short)65535))))))) ? (min((max((var_2), (((/* implicit */unsigned long long int) -1579928173)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)29004)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) - (((/* implicit */int) (short)(-32767 - 1)))))) > (((6343923982735610144ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
        /* LoopSeq 4 */
        for (signed char i_15 = 2; i_15 < 8; i_15 += 1) /* same iter space */
        {
            arr_58 [i_14] [i_14] [i_14] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min(((short)-21062), (((/* implicit */short) (_Bool)1))))), (8381153024090061002ULL))) << (((max((((((/* implicit */_Bool) var_12)) ? (1688272062295836106ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((_Bool) var_5))))) - (1688272062295836066ULL)))));
            var_30 *= ((/* implicit */signed char) ((((long long int) (_Bool)0)) - (min((var_12), (((/* implicit */long long int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_14)), (var_2))) > (((/* implicit */unsigned long long int) var_9)))))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (18446744073709551603ULL)))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12564886197127212007ULL))))), ((+(var_7))))))))));
                arr_61 [i_16] [i_16] [i_16] = ((/* implicit */int) var_7);
            }
            for (short i_17 = 2; i_17 < 9; i_17 += 2) 
            {
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_7))))))) && (((/* implicit */_Bool) ((unsigned int) (short)-31780)))));
                arr_65 [i_17] [i_15] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)))))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                arr_68 [i_14] = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_14)));
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 4; i_20 < 10; i_20 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_13))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (7193121321259455944LL)));
                        }
                    } 
                } 
            }
            var_38 += ((/* implicit */long long int) max((min(((-(var_11))), (var_14))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-2)) ? (var_10) : (((/* implicit */unsigned long long int) var_11))))))));
        }
        /* vectorizable */
        for (signed char i_21 = 2; i_21 < 8; i_21 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */signed char) min((var_39), ((signed char)126)));
            /* LoopNest 3 */
            for (unsigned int i_22 = 2; i_22 < 10; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        {
                            arr_87 [i_14] [i_14] [i_14] [i_14] [i_14] [i_23] [i_14] = ((/* implicit */_Bool) (-(var_10)));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned int) -2147067472))));
                            var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15444)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_14)) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7451378547646023999LL)) ? (2147067472) : (-2147067472))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_25 = 0; i_25 < 11; i_25 += 3) 
        {
            var_42 = ((/* implicit */signed char) min((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_9)) : (1688272062295836112ULL))))), (((var_5) ? (((/* implicit */int) (signed char)98)) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_13))))))));
            var_43 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) min((var_3), (((/* implicit */short) var_5))))), (min((var_4), (((/* implicit */unsigned int) var_0)))))) | (var_14)));
        }
        for (signed char i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            var_44 = ((/* implicit */unsigned char) ((min((var_4), (((/* implicit */unsigned int) ((unsigned char) var_0))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 1688272062295836106ULL)))) <= (var_4)))))));
            /* LoopSeq 1 */
            for (int i_27 = 2; i_27 < 10; i_27 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_28 = 1; i_28 < 9; i_28 += 3) 
                {
                    for (short i_29 = 0; i_29 < 11; i_29 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) (short)-10018);
                            var_46 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-28))));
                            var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (var_14)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) << (((4294967295U) - (4294967289U))))))));
                            var_48 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50943)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (var_9) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((var_11) - (632747273U)))))))))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_14)))), ((-(var_10)))));
            }
        }
    }
    var_50 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (min((((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((var_5) ? (838849739U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
}
