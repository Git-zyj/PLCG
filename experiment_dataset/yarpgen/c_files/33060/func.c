/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33060
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
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) (unsigned short)31807)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (short)32767))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || ((!(((/* implicit */_Bool) arr_2 [i_0]))))))) : (((/* implicit */int) arr_0 [i_1]))));
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_8)))), (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_5)))))));
                arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */_Bool) (short)-24336)) ? ((-9223372036854775807LL - 1LL)) : (var_10))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(signed char)0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) (short)24336)) > (((/* implicit */int) arr_4 [(signed char)6]))))))))));
            }
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_17 -= ((/* implicit */unsigned char) (signed char)56);
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] [(short)4] [i_3] [(short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)30939)) / (((/* implicit */int) (short)-31704))))))) ? ((((_Bool)0) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((_Bool) (short)-32756))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (2131504041562873673LL)))) || (((/* implicit */_Bool) (~(-6707554309686981529LL)))))))));
                            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20273))) : (-5170550768629084897LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)87)) ^ (((/* implicit */int) var_9)))) < (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)31387))))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (short)28665)))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [(unsigned char)5] [(unsigned char)5] [(signed char)2])), (arr_2 [i_0 - 1])))) : ((+(((/* implicit */int) var_9)))))) == (((/* implicit */int) var_8))));
            }
            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) arr_10 [i_7] [i_1 + 3] [i_1 + 3] [1LL]);
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)6214)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)1)))) > (min(((+(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))))));
                        }
                    } 
                } 
                arr_27 [i_0 + 1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) 6305432191552437848LL)) || (((/* implicit */_Bool) (short)-28666))))) >> (((/* implicit */int) var_8)))) >> (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) ((short) -3109438904972982794LL))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (signed char)68))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((var_10), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0 + 1] [i_1] [i_6] [i_0 + 1] [i_1] [i_1 - 1])))))) : (1023LL)));
            }
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-23573)) && (((/* implicit */_Bool) arr_24 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 + 2]))))) : (((/* implicit */int) (signed char)-96))));
                var_24 = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (short i_10 = 3; i_10 < 10; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_35 [(unsigned short)10] [i_1 + 3] [i_9] [i_10 - 3] [i_11] &= var_3;
                            var_25 += ((/* implicit */short) var_1);
                            var_26 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1 + 3] [(unsigned short)2] [i_10 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_1 + 3] [i_9] [i_10 - 3])))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1] [i_1 + 3] [i_1] [i_10 - 1])) > (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), ((+(-8788078103547030436LL))))) > ((-(min((((/* implicit */long long int) arr_21 [i_0] [i_0] [(short)9] [i_9])), (6143066547461302018LL)))))));
                var_28 = ((/* implicit */short) max((max((((long long int) (unsigned char)201)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-39)) & (((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0 + 1])) : (((/* implicit */int) (unsigned char)255)))))));
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                var_29 |= ((/* implicit */short) (((((+(((/* implicit */int) var_6)))) + (((/* implicit */int) max((arr_10 [i_12] [i_12] [(short)3] [i_0]), ((signed char)-96)))))) - ((-(((/* implicit */int) arr_16 [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                var_30 = ((/* implicit */short) min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned char) arr_4 [i_0]))))), (((6379623665899873654LL) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])))))));
            }
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_31 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_31 [i_1 + 1] [(signed char)2] [i_13] [i_14 + 3] [i_1 + 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((arr_31 [i_1 + 1] [(signed char)8] [(signed char)8] [i_14 + 3] [(signed char)6] [i_0 - 1]) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            var_32 -= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) min(((short)-32754), (((/* implicit */short) arr_37 [i_0] [i_1] [i_14] [(short)3])))))) | (min((6379623665899873654LL), (((/* implicit */long long int) (signed char)49)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_14 + 1] [i_1 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [(short)7])) > (((/* implicit */int) arr_38 [i_0 - 1] [i_0 + 1] [i_0])))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_20 [i_0] [i_1] [i_13] [i_14])))) > ((~(((/* implicit */int) (unsigned char)183))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (arr_31 [i_15] [i_15] [i_13] [i_0] [i_15] [i_0])))))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_45 [(short)6]))));
                            arr_50 [i_0] [i_15] [i_1] [(signed char)5] [3LL] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-6)))), (((/* implicit */int) arr_15 [i_0 + 1] [i_1 - 1])))), (((((/* implicit */int) (signed char)-72)) | (((/* implicit */int) (unsigned char)192))))));
                        }
                    } 
                } 
            }
            arr_51 [i_0] = ((/* implicit */short) ((signed char) max((arr_38 [i_1 + 3] [i_1 + 3] [i_1 + 1]), (var_2))));
        }
        var_35 = ((/* implicit */short) -8788078103547030441LL);
    }
    for (short i_16 = 1; i_16 < 11; i_16 += 1) 
    {
        var_36 += min((var_6), (min((((/* implicit */short) (signed char)54)), ((short)-16816))));
        arr_54 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_16 + 1] [i_16 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_53 [i_16] [i_16]))))) ? (var_13) : (((-6379623665899873655LL) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_16 - 1] [i_16 - 1])))))));
    }
}
