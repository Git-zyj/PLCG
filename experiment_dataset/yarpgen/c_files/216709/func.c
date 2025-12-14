/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216709
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_2 - 2] [i_0]), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_1] [i_3]), (arr_3 [i_0] [i_1] [i_0])))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-7096), (((/* implicit */short) ((11022769264462334328ULL) != (((/* implicit */unsigned long long int) 4182271422U)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) <= (0U)))) : (((/* implicit */int) ((short) ((var_7) * (var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12517))));
                            arr_16 [i_0] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] [i_5] = (~(((/* implicit */int) ((arr_15 [i_0] [i_1] [i_0] [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)73)) && (((/* implicit */_Bool) 3871321993U))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_7] [i_8] [i_7 - 2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (arr_21 [i_1 + 2] [i_1 + 2] [i_6 - 4] [i_6 - 4] [i_7 - 2] [i_8 + 3]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_6] [i_8])) && (((/* implicit */_Bool) 0U)))))) * (((((/* implicit */_Bool) (short)24668)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_6] [i_8 + 3])))))));
                                arr_26 [i_0] = ((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 493635456U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((-(((/* implicit */int) arr_13 [i_11])))) >= (((/* implicit */int) ((648349994) > (((/* implicit */int) arr_17 [i_11] [i_9] [i_11]))))))))));
                                arr_35 [i_0] [i_0] [i_9] = ((/* implicit */int) (-((~(((var_1) - (((/* implicit */unsigned int) var_18))))))));
                                arr_36 [i_0] [i_9] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_21 [i_10] [i_10] [i_9] [i_0] [i_1] [i_9])) > (((int) arr_9 [i_0] [i_1] [i_9] [i_11] [i_9])))))));
                                arr_37 [i_0] [i_1] [i_0] [i_1] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)25309)) + (((((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_0])), (arr_12 [i_0] [i_1] [i_9] [i_0])))) >> (((/* implicit */int) ((((/* implicit */int) (short)24644)) <= (((/* implicit */int) (unsigned char)204)))))))));
                                var_24 = ((/* implicit */int) (-(var_5)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned char i_13 = 2; i_13 < 11; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_0] [i_12] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) (short)15639)), (min((11022769264462334302ULL), (((/* implicit */unsigned long long int) var_13))))))));
                                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_0)))))) >= (min((((/* implicit */unsigned long long int) arr_1 [(signed char)10])), (((unsigned long long int) var_10))))));
                                var_27 += ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30485))) * (11297393206400056756ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13365))))) : (((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [8ULL]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 3; i_17 < 19; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((7149350867309494859ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))));
                            var_29 ^= (-(((/* implicit */int) ((arr_54 [i_17 - 3] [i_17 - 2] [i_16] [i_17 - 2]) >= (1294856282U)))));
                            arr_57 [i_18] [i_17 + 1] [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-120)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) arr_54 [i_15] [i_15] [i_15] [i_18])) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (max((arr_51 [i_15] [i_15]), (((/* implicit */unsigned int) (unsigned char)118)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_51 [i_15] [i_15]), (((/* implicit */unsigned int) (signed char)-67))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) >> (((var_15) + (170229532))))))))))));
                            var_30 = ((/* implicit */unsigned int) (signed char)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11297393206400056746ULL)))))) <= (var_9))) ? ((~((~(((/* implicit */int) arr_45 [i_16] [i_16])))))) : (((/* implicit */int) var_3)))))));
                            var_32 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (var_17)))) ? (((/* implicit */unsigned int) (-(-225517168)))) : (arr_48 [i_20] [i_16]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_21 = 1; i_21 < 22; i_21 += 1) 
                {
                    for (unsigned int i_22 = 3; i_22 < 22; i_22 += 3) 
                    {
                        for (short i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            {
                                arr_69 [i_16] [i_16] [i_16] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (arr_58 [i_16] [i_21 + 1])))));
                                arr_70 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_49 [i_21 - 1] [i_21 - 1])) && (((/* implicit */_Bool) var_5)))) || (((((/* implicit */_Bool) arr_61 [i_15] [i_16] [i_21] [i_22])) && (((/* implicit */_Bool) arr_51 [i_15] [i_15]))))))) > (((/* implicit */int) arr_59 [i_21 - 1] [i_15] [i_23]))));
                                arr_71 [i_15] [i_22 - 1] [i_21] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) arr_49 [i_23] [i_22 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) arr_47 [i_16])) != (((/* implicit */int) (signed char)56))))))))));
                                var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-4860))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 2; i_24 < 22; i_24 += 1) 
                {
                    for (unsigned int i_25 = 2; i_25 < 22; i_25 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_64 [i_15])) || (((/* implicit */_Bool) 1872206033304296315ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_13))))))))) : (min((max((((/* implicit */unsigned long long int) 2109503883)), (var_0))), (((/* implicit */unsigned long long int) 2029567609U))))));
                            var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_56 [i_24 - 1] [i_25 - 2] [i_24] [i_25]), (((/* implicit */unsigned long long int) (unsigned char)182))))) || ((!(((/* implicit */_Bool) var_16))))));
                            var_36 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_15] [i_15])) >= (((/* implicit */int) var_12))))), ((-(var_8))))), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
