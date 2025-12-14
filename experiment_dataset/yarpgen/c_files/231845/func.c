/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231845
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned char) var_16);
        var_19 = ((/* implicit */short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (unsigned short)41974)) - (41944)))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_12))))) == (max((var_13), (((/* implicit */int) var_1))))));
                    var_21 = ((/* implicit */signed char) ((max((((/* implicit */int) var_8)), (((((/* implicit */int) var_16)) << (((/* implicit */int) var_5)))))) | (130944)));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_10)))), (((((((/* implicit */int) (unsigned short)41974)) << (((var_17) - (3445375325041929641LL))))) | (((/* implicit */int) (unsigned short)41974))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((max((var_11), (var_17))), (((/* implicit */long long int) (unsigned short)41974))));
        var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) max((var_9), ((short)-1)))) / (-2027963740)));
    }
    for (int i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) -1937109848510028967LL);
            /* LoopSeq 2 */
            for (int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                var_26 = ((/* implicit */long long int) (short)22346);
                var_27 ^= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)4526)), (min((2147483647), ((~(10)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)40))));
                            var_29 = (-(((/* implicit */int) var_4)));
                        }
                    } 
                } 
                var_30 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_17)));
                var_31 &= ((/* implicit */unsigned char) (!((((_Bool)1) && (((/* implicit */_Bool) (signed char)-20))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_32 = ((/* implicit */short) 0LL);
                    var_33 = ((/* implicit */int) var_5);
                    var_34 = -6LL;
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_35 ^= ((/* implicit */short) var_12);
                        var_36 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                        var_37 = ((/* implicit */long long int) ((var_17) < (((/* implicit */long long int) ((var_13) % (((/* implicit */int) (unsigned short)906)))))));
                        var_38 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (unsigned short)62879)) - (62879)))));
                    }
                }
            }
            var_39 *= ((/* implicit */unsigned long long int) var_13);
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_40 -= ((/* implicit */long long int) ((((((/* implicit */int) var_15)) == (((/* implicit */int) (unsigned short)1)))) || (((/* implicit */_Bool) (signed char)60))));
            var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
            var_42 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_5))));
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_43 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 14LL))))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), ((unsigned short)31)))))))));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_15)))) << (((((/* implicit */int) max(((unsigned short)2656), (((/* implicit */unsigned short) var_9))))) - (53438)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                var_45 = ((/* implicit */signed char) min((max((((/* implicit */int) (unsigned short)39808)), (1073733632))), (((((/* implicit */int) var_5)) / (((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    var_46 = ((/* implicit */unsigned short) min((min((var_11), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_8))));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) var_10))));
                    var_48 = -1073733648;
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)22346))) + (var_12))) > (var_17)))) != (min(((+(-1073733633))), (-1073733658)))));
                    var_50 = ((/* implicit */long long int) var_2);
                }
                var_51 = var_0;
                var_52 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 14LL)) + (max((((/* implicit */unsigned long long int) var_5)), ((+(15857316091418445615ULL)))))));
            }
            for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
            {
                var_53 = ((/* implicit */long long int) min((((/* implicit */int) ((var_14) && (var_5)))), ((~(((/* implicit */int) var_6))))));
                var_54 = ((/* implicit */short) max((((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)242)))), (var_10)));
                /* LoopSeq 2 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    var_55 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)242)) <= (((/* implicit */int) (_Bool)0))));
                    var_56 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) < ((+(((/* implicit */int) var_16))))));
                    var_57 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_16)))), (max((((/* implicit */unsigned int) (short)19330)), (3314249440U)))));
                    var_58 = ((/* implicit */int) max((min((var_15), (((/* implicit */unsigned short) (unsigned char)4)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16384)) && (((/* implicit */_Bool) 10793320010500837053ULL)))))));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_59 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2))));
                    var_60 += ((/* implicit */short) (_Bool)1);
                }
            }
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                for (unsigned short i_21 = 4; i_21 < 16; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        {
                            var_61 *= ((/* implicit */signed char) var_16);
                            var_62 = ((/* implicit */long long int) var_8);
                            var_63 = ((/* implicit */unsigned char) ((1073733650) > (((/* implicit */int) var_15))));
                            var_64 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            } 
            var_65 = ((/* implicit */int) -1882581690107919616LL);
        }
        for (short i_23 = 0; i_23 < 20; i_23 += 3) 
        {
            var_66 *= ((/* implicit */unsigned short) var_10);
            var_67 = ((/* implicit */short) var_4);
        }
        var_68 = ((/* implicit */signed char) var_13);
        var_69 = ((/* implicit */unsigned char) var_4);
        var_70 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_4)), (var_17)))));
    }
    var_71 += ((/* implicit */short) var_5);
    var_72 = ((/* implicit */long long int) var_7);
}
