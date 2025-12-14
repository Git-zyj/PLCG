/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211568
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */short) var_0);
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_3]))))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)124))))), ((+(var_17))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) var_2)))), (max((var_16), (((/* implicit */int) (short)32767)))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) > (var_10))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (arr_9 [i_0] [8] [i_5] [i_0])))));
                            arr_20 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-18))));
                            var_22 -= ((/* implicit */unsigned long long int) var_2);
                            var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)63)) >= (((/* implicit */int) (signed char)118))))), (var_6))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_24 -= min((((/* implicit */int) (unsigned char)255)), ((~(((/* implicit */int) (short)7680)))));
                            arr_27 [14U] [i_1] [i_7] [i_8 + 1] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((var_15) < (((/* implicit */unsigned long long int) var_9))))), (max((((/* implicit */unsigned short) var_3)), ((unsigned short)15773)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))) * (var_14)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(short)16]))))) ? (min((var_15), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_8) & (var_13))))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min(((+(min((((/* implicit */unsigned long long int) var_7)), (var_15))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1 + 1] [i_7] [11U])), (((var_13) - (var_8)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_27 = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) arr_35 [i_11]);
                            var_29 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 18; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned int) min(((~(var_7))), (((/* implicit */int) var_4))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - ((+(((/* implicit */int) (unsigned char)192))))));
                            var_32 = ((/* implicit */unsigned short) ((arr_36 [i_11] [i_11] [(signed char)7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195)))));
                            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)224), (((/* implicit */unsigned short) (unsigned char)83))))))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) ^ (0)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (signed char i_18 = 2; i_18 < 17; i_18 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) ^ (var_17))))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) 2849085818U))));
                            var_37 = ((/* implicit */unsigned char) max((max((arr_33 [i_17]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned char)237))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_10))), (((/* implicit */unsigned int) (+(var_14)))))))));
                            var_39 = ((/* implicit */unsigned long long int) max(((short)32767), (((/* implicit */short) (unsigned char)84))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) 
    {
        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                        {
                            {
                                arr_67 [i_19] [i_19] [i_19] [i_23] [i_19] = min((((/* implicit */int) var_0)), (min((-1), (((/* implicit */int) (unsigned char)171)))));
                                var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (max((arr_36 [i_19] [i_23] [i_23]), (((/* implicit */unsigned long long int) (~(arr_46 [i_19] [i_23] [i_22] [i_23]))))))));
                                var_41 = ((/* implicit */unsigned long long int) ((max((var_8), (((-1283574712) % (var_14))))) - ((+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483635)))))))));
                                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned short)27238)), (750128660))), (((/* implicit */int) var_2)))))));
                                var_43 = ((/* implicit */signed char) ((max((min((var_17), (((/* implicit */unsigned long long int) (unsigned char)155)))), (((/* implicit */unsigned long long int) var_4)))) != (var_15)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 1; i_24 < 18; i_24 += 2) 
                    {
                        for (int i_25 = 0; i_25 < 20; i_25 += 2) 
                        {
                            {
                                var_44 ^= ((/* implicit */int) ((min((-8388608), (-1283574712))) != ((-((~(var_13)))))));
                                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_25]))))), ((+(((/* implicit */int) max(((unsigned char)5), (((/* implicit */unsigned char) var_12))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 1; i_26 < 17; i_26 += 4) 
                    {
                        for (unsigned char i_27 = 4; i_27 < 18; i_27 += 4) 
                        {
                            {
                                arr_78 [19ULL] [19ULL] [19ULL] [i_26] [i_27] = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned int) 268431360)) >= (var_10))) ? (arr_33 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15773))))), (((/* implicit */unsigned long long int) var_13))));
                                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (56474723U)))), (((1837241366) | (-2147483647))))))));
                                var_47 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)80)) > (((/* implicit */int) (signed char)2))))) != (((((/* implicit */int) (unsigned char)192)) << (((337965831) - (337965819)))))))), (min((((/* implicit */unsigned long long int) min((var_13), (var_16)))), (max((((/* implicit */unsigned long long int) var_9)), (var_15)))))));
                                var_48 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)63))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_28 = 2; i_28 < 17; i_28 += 4) 
                    {
                        for (int i_29 = 0; i_29 < 20; i_29 += 3) 
                        {
                            {
                                var_49 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_6))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_68 [i_19] [i_19] [i_19] [14ULL]), (var_6))))) & (arr_39 [i_19] [i_21] [i_19])))));
                                var_50 = ((/* implicit */signed char) (+(max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_0)))))))));
                                arr_83 [(unsigned short)3] [i_19] [i_19] [i_19] [(unsigned short)3] [i_29] [i_29] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
