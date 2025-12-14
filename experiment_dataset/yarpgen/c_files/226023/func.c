/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226023
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((((int) var_12)), (((int) var_14))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) << (((arr_11 [i_0] [i_2] [i_2]) - (2356280991U)))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (arr_11 [i_0] [i_2] [i_2]))), (((unsigned int) arr_6 [i_0] [i_2])))) : (((/* implicit */unsigned int) ((int) var_15))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)121)))))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)103))))))) ? (((/* implicit */int) (signed char)60)) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_7]))))) ? (((/* implicit */int) (signed char)37)) : (arr_21 [i_5] [i_5] [i_5])))));
                        var_18 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13)))))))));
                    }
                } 
            } 
            var_19 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5]))))), (arr_25 [i_5] [i_5] [i_6] [i_6]));
        }
        for (unsigned int i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            var_20 = max((((var_1) ? (min((((/* implicit */unsigned long long int) var_10)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), ((signed char)127))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) ? (429163568) : (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_12))))))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                arr_36 [i_5] [0U] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_14)))))) ? (min((arr_11 [i_9 - 1] [(signed char)2] [i_9 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((var_7) - (3890697817275677812ULL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))) : (var_13))) - (147ULL))))))));
                arr_37 [i_5] [i_5] [i_10] [(unsigned char)20] &= ((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_10] [i_10]);
                arr_38 [i_5] [12ULL] [i_5] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_34 [i_5] [i_5] [i_5])), ((~(min((var_12), (((/* implicit */unsigned long long int) arr_2 [i_5]))))))));
            }
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    for (int i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        {
                            arr_47 [i_5] [i_9] [(_Bool)1] [i_12] [20] [i_5] [i_5] = var_2;
                            arr_48 [i_5] [i_9] [i_11] [i_12] [i_13] = ((((/* implicit */_Bool) arr_44 [i_9] [i_12] [i_13])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)105)) <= (((/* implicit */int) var_1))))) : ((+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) > (((/* implicit */int) (signed char)-38))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_6), (max((((/* implicit */unsigned long long int) ((arr_42 [i_5] [i_5] [i_5] [i_11]) == (16630027387043924428ULL)))), ((+(var_7)))))));
            }
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_53 [i_5] [i_14] [i_5] [i_9] [i_5] = ((/* implicit */signed char) var_10);
                    var_22 -= min((((/* implicit */unsigned long long int) max((483819966U), (((/* implicit */unsigned int) (unsigned char)198))))), (((unsigned long long int) arr_15 [(signed char)2])));
                }
                arr_54 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) var_1);
                arr_55 [i_5] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_9 + 1] [i_9 - 1] [i_14])) && (((/* implicit */_Bool) arr_43 [i_9 + 1] [i_9 - 1] [i_9]))))), (((17469610465857140017ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9 + 1] [i_9 - 1] [i_9 + 1])))))));
                arr_56 [i_5] [i_9 - 2] [i_5] = ((/* implicit */_Bool) ((unsigned int) (-(max((((/* implicit */int) arr_25 [i_9 - 1] [i_9 + 1] [i_9] [i_9])), (arr_16 [i_5]))))));
                arr_57 [i_9] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (max((((/* implicit */int) (signed char)(-127 - 1))), (-777800473))) : (((/* implicit */int) var_8))))));
            }
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (int i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) var_11);
                        arr_64 [i_5] [i_9] [i_17] = ((/* implicit */_Bool) (~(max((arr_32 [i_5]), (arr_4 [i_5] [i_9 + 1] [i_9 + 1])))));
                        arr_65 [(signed char)22] [i_5] [i_16] [i_5] [(signed char)22] = ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */int) var_1)) != (1483823648)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_58 [i_5] [7ULL] [7ULL]), (((/* implicit */unsigned long long int) var_15))))))))));
                        arr_66 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (((~(var_9))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_5] [i_5] [i_16] [i_17 + 1]))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            arr_70 [i_5] [(_Bool)1] |= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (unsigned char)0)), (((var_15) ? (var_9) : (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5] [i_5] [(_Bool)0])))))), (((/* implicit */unsigned long long int) ((_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_21 [i_18] [i_18] [(signed char)22]))))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)253))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)42)), ((unsigned char)106))))) : (977133607852411599ULL))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)15))))) ? (max((((/* implicit */unsigned long long int) arr_29 [(_Bool)1])), (2358595458543858338ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_18 - 1] [i_18 - 1]))))))))));
        }
    }
    var_25 |= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max(((signed char)52), (((/* implicit */signed char) (_Bool)0))))), (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((255), (((/* implicit */int) var_1))))))))));
    var_26 |= ((/* implicit */_Bool) var_14);
}
