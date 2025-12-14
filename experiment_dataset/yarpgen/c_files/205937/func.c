/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205937
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
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (max((((/* implicit */unsigned short) (signed char)-105)), ((unsigned short)45763))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (((~(var_15))) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))) <= (((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [(unsigned short)13] [(unsigned short)13] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((((-2147483647 - 1)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned char)253))));
                    arr_9 [i_2] = ((/* implicit */int) 5756371828000591967ULL);
                    var_21 = ((/* implicit */int) max((var_21), ((~(((/* implicit */int) (unsigned char)121))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)104);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_5 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_5 - 1]))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57974))) + (((unsigned long long int) (unsigned short)65460))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((_Bool) arr_7 [i_3] [8U] [i_3])))));
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))));
            var_26 = ((/* implicit */long long int) (((((-2147483647 - 1)) < (((/* implicit */int) (signed char)107)))) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)23285)) > (((/* implicit */int) var_14)))))));
        }
        for (long long int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)61808)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))))))));
            arr_25 [16LL] [16LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54603)) ? (((/* implicit */int) arr_0 [i_7 + 2] [i_7 + 3])) : (((/* implicit */int) var_8))));
        }
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) 144115188075855871LL))));
        var_29 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) < (arr_27 [i_8])));
        var_30 = ((/* implicit */signed char) var_14);
        /* LoopSeq 1 */
        for (signed char i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_9 - 1] [i_9 - 3] [i_9 - 2])) : (((/* implicit */int) (signed char)101))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) >= (((/* implicit */int) (unsigned short)57976))));
                arr_32 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551609ULL));
            }
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_9 - 2] [i_12 + 1] [i_12 + 1])) % ((-(((/* implicit */int) (short)32767)))))))));
                    var_35 = ((/* implicit */unsigned long long int) (signed char)-117);
                }
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) && ((_Bool)1)));
                var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_8] [i_9 + 1] [i_9 + 1] [i_9 - 3]))));
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 1; i_14 < 21; i_14 += 3) 
                    {
                        arr_42 [1LL] [4U] [i_11] [i_9] [4U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)44604)) ? (727221928U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24133)))));
                        var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) ((432330945472292909LL) >> (((2097151ULL) - (2097127ULL)))))) && (((/* implicit */_Bool) (short)-18749))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        arr_45 [i_8] [i_8] [i_15] [i_8] [i_15] |= ((/* implicit */int) ((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 13492631589312568229ULL)))));
                        arr_46 [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 562949953421311LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((-(arr_29 [i_8] [(unsigned char)0])))));
                        arr_47 [i_8] [i_9] [i_9] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_44 [i_9] [i_9] [i_9] [i_9]) << (((1448953866297647119ULL) - (1448953866297647119ULL)))))) && (arr_37 [i_9] [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 3] [i_9])));
                    }
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((2147483647) - (((/* implicit */int) (_Bool)1)))))));
                    var_41 = ((/* implicit */signed char) ((unsigned long long int) arr_28 [i_9 + 1] [i_9] [i_9]));
                }
            }
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                var_42 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) > (9002801208229888LL)));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_9 - 3] [i_9 - 3] [i_9] [i_9 - 3] [i_17])) % ((-(((/* implicit */int) (signed char)-101))))));
                    arr_53 [i_9] [i_9] = ((/* implicit */unsigned short) ((signed char) arr_31 [i_9] [i_9 - 1] [i_9] [i_9 - 3]));
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((unsigned int) arr_49 [i_8] [i_9 - 3] [14LL] [i_17])))));
                }
                for (long long int i_18 = 2; i_18 < 20; i_18 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_51 [i_8] [i_8] [i_9 + 2] [i_16] [i_18] [i_18])))))));
                        arr_58 [i_16] [i_18] [i_9] = ((unsigned char) arr_50 [i_9] [i_16] [i_19]);
                        arr_59 [i_8] [i_9] [i_16] [i_16] [i_16] [i_9] [19ULL] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-105))))));
                    }
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                    {
                        arr_63 [i_20] [i_9] [i_8] = ((((((/* implicit */_Bool) var_9)) ? (15471448836846744861ULL) : (((/* implicit */unsigned long long int) var_15)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)107))))));
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (((arr_34 [i_8] [i_18] [i_8]) - (((/* implicit */unsigned int) 2147483647)))))))));
                        arr_64 [17ULL] [i_9 + 1] [i_9] [i_9 + 1] [i_9] [17ULL] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_8] [i_9 + 2] [i_18 - 2] [i_18] [i_18] [(signed char)20])) ? (arr_38 [(_Bool)1] [i_9 - 2] [i_18 + 2] [i_18 + 1] [i_20] [i_9 - 2]) : (7528816401567436625LL)));
                        var_47 = ((/* implicit */_Bool) max((var_47), ((!(((/* implicit */_Bool) arr_30 [i_9 - 3] [i_9 - 3] [i_18 + 1]))))));
                    }
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_8] [i_9 - 2] [i_9 - 2])))))));
                        arr_67 [i_16] [i_18] [(_Bool)1] [(_Bool)1] [i_16] &= ((/* implicit */short) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16575)))));
                        arr_68 [i_9] [i_18] [(_Bool)1] [(_Bool)1] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)55974))));
                        var_49 = ((/* implicit */unsigned short) arr_34 [i_21] [i_9] [i_9]);
                    }
                    var_50 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (arr_41 [i_18 + 1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
        }
    }
}
