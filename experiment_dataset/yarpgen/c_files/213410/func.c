/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213410
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
    var_18 = var_17;
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)55415))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_14)));
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)96)) % (((/* implicit */int) (unsigned char)96)))) % (((int) (+(((/* implicit */int) (unsigned char)81)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8)))), (max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11724714970905072268ULL)))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0 - 1] [i_0] [i_0 - 1]))) ? (-584659013) : (((((/* implicit */_Bool) 11724714970905072268ULL)) ? (((/* implicit */int) (unsigned char)52)) : (-337373289)))));
            arr_7 [i_0] [i_1 + 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)90))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [(short)16] [i_0] [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1])))) ? (max((134217724U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */int) (unsigned char)96))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294950912U)) ? (337373289) : (((/* implicit */int) (unsigned char)162))))) != (9084408892607747706ULL)))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_1 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (16383153794009140928ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 2] [i_0])) ? (var_13) : (((/* implicit */unsigned int) -337373289)))))))) ? (((11724714970905072247ULL) / (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1784867789)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 397726386232714715ULL))))) : (((int) (short)-17481))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) -949742750);
                            var_24 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98)))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((min((((var_14) + (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) -337373289)))) > (((/* implicit */unsigned long long int) (~(var_8))))));
                    }
                } 
            } 
        }
        arr_16 [i_0] = ((/* implicit */_Bool) var_16);
        arr_17 [i_0] = ((/* implicit */short) var_1);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_3 [(unsigned char)5] [i_0] [i_0 + 1]))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)24))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0 + 2])))))));
    }
}
