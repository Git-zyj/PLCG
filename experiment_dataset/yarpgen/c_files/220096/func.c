/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220096
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
            {
                arr_10 [i_0] [i_1] = arr_1 [i_0];
                var_17 += ((/* implicit */unsigned long long int) ((((min((9825833665059346285ULL), (18446744073709551615ULL))) | (arr_1 [i_0 - 2]))) == (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (0ULL)))));
                arr_11 [i_0 - 3] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_5 [i_1] [i_2] [i_2]) : (arr_1 [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_0 [i_0 + 2]) : (arr_5 [i_1] [i_2] [i_2]))) : ((+(arr_0 [i_0 + 3])))));
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((15709557097213139183ULL) ^ (arr_7 [i_0 - 2] [i_1] [i_2])))))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (9893540684054366417ULL)));
                var_20 = var_9;
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (arr_0 [i_0 + 2]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
            {
                arr_16 [i_1] [i_1] [i_0] [i_1] = ((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (arr_3 [i_1])));
                var_22 = ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) arr_15 [i_1])) ? (var_1) : (arr_8 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_1] [i_0 + 4]))));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(144115188073758720ULL)))))) ? (((((/* implicit */_Bool) 6726117172404803109ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (2865925966707093524ULL)))) : (((/* implicit */int) ((var_5) == (arr_6 [i_0] [i_1] [i_0])))))) : (((/* implicit */int) var_16))));
            var_24 = ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0 + 1] [i_0])) ? (14162606475966496132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((unsigned long long int) 144115188073758720ULL)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] = ((/* implicit */_Bool) (-(17905495294999065600ULL)));
            arr_22 [i_0 + 2] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_12 [i_0] [i_0 - 2] [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (6497869923515981183ULL) : (var_13)))) ? (max((var_13), (((/* implicit */unsigned long long int) var_0)))) : ((-(6490264455436218609ULL))))) : (max((arr_23 [i_0 + 1]), (arr_23 [i_0 + 1]))));
            arr_27 [i_0] [i_0] [i_6] = ((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0 + 4] [i_0 + 3])) / (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (arr_1 [i_0 - 1]))));
            var_26 = ((/* implicit */_Bool) 7823641639877170569ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_33 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_34 [i_7] [i_7] = (_Bool)0;
                    }
                } 
            } 
        }
        arr_35 [3ULL] [i_0 + 3] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_28 [i_0 + 2]) : (arr_4 [i_0] [i_0 - 1]))));
    }
    var_28 = ((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)));
    var_29 = min((max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || ((_Bool)1)))))), (((/* implicit */unsigned long long int) var_16)));
    var_30 = var_3;
}
