/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230770
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) var_2))))) ? (((int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4251677964468867785ULL)) ? (((/* implicit */int) var_9)) : (var_5)))) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) var_14)))) : (((var_3) + (((/* implicit */int) var_15))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 1390536169U))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((int) ((1390536169U) + (((/* implicit */unsigned int) -27))))));
                                var_20 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)177))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) min(((short)18595), (var_9)))))), (((/* implicit */int) ((((/* implicit */_Bool) 4251677964468867785ULL)) && (((/* implicit */_Bool) 0ULL)))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) min((max((var_5), (((/* implicit */int) var_16)))), (var_12)))) >= (var_11)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (15901712063011869265ULL)))) ? (((/* implicit */int) (short)-26483)) : (((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_17)))) : (((int) var_11))))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (var_11))))))) ? ((-(((((/* implicit */_Bool) 2545032010697682359ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (var_1))))) : (((unsigned long long int) (short)27431))));
                    arr_14 [i_0] [i_2] [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */int) var_16)) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)8203)) : (2147483647))))));
                }
            } 
        } 
        var_24 = ((var_12) / ((((+(((/* implicit */int) (short)19489)))) * (((/* implicit */int) var_16)))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        var_25 = ((/* implicit */int) max((var_25), ((-(((((/* implicit */int) var_17)) - (((/* implicit */int) (short)18595))))))));
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) var_0))))) ? (max((var_12), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-19487)) : (((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (short)18615))))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)206)) : (-1751915460)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))))));
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                arr_27 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15901712063011869273ULL)) && (((/* implicit */_Bool) var_11))));
                var_27 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (((2545032010697682343ULL) - (2545032010697682359ULL)))));
                var_28 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31503)))));
                arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) var_9));
            }
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14195066109240683849ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (8387584) : (852295945)));
                            var_30 = ((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (short)11919)) : (((/* implicit */int) (unsigned char)179)))) << (((4832615214212107214ULL) - (4832615214212107197ULL))));
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (14621919277894254390ULL)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (var_5)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_7)))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
            {
                var_33 |= ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 12420745518799141519ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) (unsigned char)180))));
                arr_42 [i_6] [2ULL] [2ULL] [i_13 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_17))));
                arr_43 [i_6] [i_6] [14] [14] = ((/* implicit */_Bool) ((1390536178U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-31506)))));
            }
            for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (var_3)));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) var_15)) >= (((var_3) ^ (((/* implicit */int) var_6)))))))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))))));
                var_37 |= ((/* implicit */int) (short)-31482);
            }
            arr_47 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -485113029)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_8))));
            var_38 |= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1)));
        }
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_13))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (4155647804U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) var_12))));
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) == (((((/* implicit */int) var_14)) | (((/* implicit */int) var_9)))))))));
        arr_48 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */int) var_2))))) ? (var_5) : ((-(var_3)))));
    }
}
