/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48896
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
    var_15 -= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (3857367721U)))) ? (((((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (202))))) ^ (max((((/* implicit */int) arr_1 [i_0])), (1574474818))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))))) >> (((((((/* implicit */int) var_5)) % (1574474818))) - (232)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_4 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_1 [i_1 + 1]), (((/* implicit */short) var_14)))));
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) 1574474818)) != (max((((((/* implicit */_Bool) (short)16542)) ? (760751549U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((4122145921U), (((/* implicit */unsigned int) arr_8 [i_0])))) * (((2246241041U) / (var_12)))))) / ((+(arr_9 [i_0] [i_3] [i_4 - 1])))));
                        var_18 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 21; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_29 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_9 [i_5 - 1] [i_7 - 1] [i_8 + 2])))) ? (((var_11) << (((((((/* implicit */_Bool) var_12)) ? (75116260U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12669))))) - (75116259U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_0)) + (105))))))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_4)) < (var_10)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    arr_33 [i_5] [i_6] [(signed char)0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1574474819)) >= (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 - 1] [i_6] [13] [13] [i_6])))))))) * ((-(((/* implicit */int) var_0))))));
                    var_20 = ((/* implicit */int) arr_30 [i_5] [(unsigned char)0] [(unsigned char)11] [12] [i_5] [(unsigned char)11]);
                    var_21 *= ((((/* implicit */int) arr_32 [i_5] [i_6] [i_7 + 3] [i_10] [i_10] [15U])) >= (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))));
                    arr_34 [i_5] [i_5] [i_5] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((-1574474819) > (0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5])))))))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_0)), ((short)(-32767 - 1))))) & (((((/* implicit */int) (short)12666)) ^ (((/* implicit */int) arr_21 [i_10])))))))));
                }
            }
            arr_35 [i_5 + 1] [i_5] [i_6] = 488888574;
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_5] [(signed char)22])), (max((((/* implicit */unsigned long long int) var_9)), (var_3)))))) ? (((((/* implicit */_Bool) ((1574474818) & (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_9 [i_5] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (-(arr_26 [i_6] [i_6] [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (((/* implicit */int) (unsigned char)46)))))) + (437599574U))))));
            arr_36 [i_5] [(unsigned char)14] |= ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned char)69)) == (((/* implicit */int) arr_25 [(unsigned char)2] [i_6] [i_5] [i_6] [i_5 + 1]))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) (+(((var_11) - (arr_11 [i_5 - 1])))));
            arr_40 [i_5] = ((/* implicit */signed char) (short)12666);
            arr_41 [i_5] = ((/* implicit */short) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 3) 
            {
                arr_45 [i_5] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) 3857367721U)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) == (((/* implicit */int) var_5)))) ? (((long long int) (signed char)-73)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_11]))))))))));
                arr_46 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_12])) ? (((8878656047448919920ULL) >> ((((+(var_2))) - (3138542383U))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((36028797002186752ULL) == (var_10)))))))));
                var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) -4899313966420861725LL)) : (var_10)))));
            }
            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (5979518141732877887ULL))))) : ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (4227078419U)))) : (arr_22 [i_5 + 1]))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_26 -= ((/* implicit */_Bool) arr_49 [4] [4] [21U]);
            var_27 = ((/* implicit */signed char) ((((((((/* implicit */long long int) 777394660U)) & (var_1))) * (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_0 [i_5]))))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_13]))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)2] [i_13] [i_13] [5U] [(unsigned char)4] [i_13]))) : (var_2))))))));
            arr_50 [i_5] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) ^ (((/* implicit */long long int) ((1798628478U) - (3857367721U))))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3720146139978844535LL)) ? (((((var_3) & (((/* implicit */unsigned long long int) arr_44 [i_13] [(unsigned short)16] [7LL])))) << (((/* implicit */int) arr_8 [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28996)))));
        }
        for (short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    {
                        arr_59 [i_5] [i_5 - 1] [i_5] [i_16] = ((/* implicit */int) arr_23 [i_5 - 1] [i_15]);
                        var_29 = ((/* implicit */unsigned long long int) var_4);
                        arr_60 [i_5] [i_5] [i_15] [i_15] [i_16] = ((/* implicit */signed char) (~(arr_24 [i_5] [i_5 - 1] [i_15] [i_16] [20])));
                        arr_61 [i_14] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_39 [i_5] [10LL])) & (((/* implicit */int) (unsigned char)107)))) + ((~(((/* implicit */int) arr_30 [i_5 + 1] [i_14] [i_16] [i_14] [i_16] [i_14])))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) (unsigned char)233);
        }
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((437599574U) > (((/* implicit */unsigned int) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) / (var_3))))))) ^ (((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            var_32 = ((/* implicit */short) -1969390402);
            arr_65 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-12667)) == (((/* implicit */int) (short)18266))))) < (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        {
                            arr_73 [9] [9] [i_18] [i_5] [i_20] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)61)))) >> (((var_1) + (6837509486609509206LL)))));
                            arr_74 [i_20] [i_20] [i_18] &= ((/* implicit */unsigned int) ((var_10) >> (((arr_18 [i_5] [i_5 - 1] [i_5 - 1]) - (1743649675U)))));
                            var_33 = ((/* implicit */long long int) -403756696);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(arr_51 [(unsigned short)22] [i_5 + 1]))))));
                    arr_79 [(unsigned char)7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (arr_52 [i_21])));
                }
                arr_80 [i_5] [i_5] [13U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_75 [i_5 - 1])) / (((/* implicit */int) var_5))));
                arr_81 [i_5] [i_5] [i_5] [i_17] = ((/* implicit */signed char) (~(var_10)));
                var_35 = ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -68800324020230372LL)))))));
            }
        }
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (2554763793U) : (((/* implicit */unsigned int) arr_3 [7U] [i_5])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1)))))))));
        var_37 = ((/* implicit */unsigned long long int) (((+(arr_11 [i_5]))) * (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) % (((/* implicit */int) (short)18266)))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_1))))))))));
    }
}
