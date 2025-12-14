/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5134
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_1 [i_0 - 4])), (var_9))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2631388U)) && (((/* implicit */_Bool) 2369402168U)))))) : (((((/* implicit */_Bool) -9050917629405593492LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))))))));
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) 1925565127U)), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) min((1925565128U), (1925565127U))))));
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (+((~(var_11)))));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21274)))))) || (((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1 + 2]))));
            arr_11 [14] = ((/* implicit */long long int) var_8);
        }
    }
    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_16 [18U] [i_3] = ((/* implicit */unsigned int) max((((long long int) arr_5 [i_3 + 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (signed char)-17)))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)44872)) - (((/* implicit */int) (short)-1)))) > (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))))) ? (max((((var_13) << (((((/* implicit */int) (signed char)-119)) + (142))))), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)21274)))))));
                            var_20 = ((int) max(((+(var_4))), (((/* implicit */unsigned int) ((3930143339U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_5]))))))));
                            var_21 = min((1925565127U), (((/* implicit */unsigned int) (signed char)66)));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > ((+(-2147483619)))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)2))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) && (((/* implicit */_Bool) 3221963890130789103ULL)))) ? (var_15) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((+(min((var_15), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ^ (((long long int) (_Bool)1)))))));
                        }
                        arr_31 [i_3] [i_4 - 1] [i_6] [i_6] = ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (signed char)-18)));
                        var_24 = ((/* implicit */unsigned short) ((signed char) var_14));
                        var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) 2037590842)), (1577690871054945051LL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21260)) && (((/* implicit */_Bool) -365053261))));
                            arr_36 [(unsigned char)16] [i_4] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */signed char) max((((arr_34 [i_4] [i_4 + 1] [i_4 + 1] [i_9] [i_9]) & (arr_34 [i_3] [i_3] [i_4 - 1] [i_3] [i_9]))), (((((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_4 - 1] [i_6] [i_6])) ? (arr_34 [i_3 - 2] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_4 [(signed char)1])))))) <= (((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) 13122700078323873730ULL)))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_3 + 2]), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_11))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_1)))))));
            arr_37 [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */signed char) max(((+(max((((/* implicit */unsigned int) arr_27 [i_3] [i_3] [(signed char)19] [i_3] [i_3 + 1] [i_3])), (var_13))))), (((/* implicit */unsigned int) ((int) (-(var_4)))))));
        }
        arr_38 [i_3] [i_3] = ((/* implicit */long long int) var_14);
        arr_39 [i_3 + 2] [i_3] = ((/* implicit */unsigned short) (((+(var_15))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33250)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)57344))))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (max((var_9), (((/* implicit */unsigned long long int) arr_33 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3]))))))));
    }
    var_29 = ((/* implicit */unsigned short) (((((+(var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_8))))))) > (max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) 417347700U)) ? (2589215100U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
