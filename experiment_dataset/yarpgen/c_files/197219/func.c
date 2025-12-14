/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197219
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((signed char) arr_1 [i_0]));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (arr_1 [i_0]))))));
        var_17 = ((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */int) var_11))))) * (arr_0 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (arr_10 [i_1] [i_2] [i_3]) : (arr_10 [i_3] [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_2] [0]) >= (arr_10 [i_1] [i_2] [i_3]))))));
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (arr_10 [i_3] [i_2] [i_1])))), (max((arr_4 [i_1]), (arr_7 [i_1] [18ULL] [i_1]))))))) / (var_0)));
                    arr_15 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_6);
                    var_18 = arr_7 [i_1] [i_1] [i_3];
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned int) ((long long int) arr_8 [i_1] [i_1] [i_1]));
        var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((13697703675417656437ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)7])))))), (((((/* implicit */_Bool) (unsigned short)8244)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1])))))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_21 |= ((/* implicit */short) arr_3 [i_1]);
            var_22 = ((/* implicit */signed char) (_Bool)1);
            arr_19 [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((var_5) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_5 [i_4])))), (((/* implicit */int) var_1))))) <= ((~(arr_12 [i_4] [i_4 + 1] [i_4])))));
            var_23 = ((/* implicit */unsigned long long int) (+(max((min((1698191671U), (((/* implicit */unsigned int) arr_8 [i_1] [i_4 + 1] [i_1])))), (((/* implicit */unsigned int) var_1))))));
            var_24 = ((/* implicit */long long int) arr_5 [i_1]);
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) (short)-23137);
                        var_26 = ((/* implicit */short) var_4);
                    }
                } 
            } 
            var_27 = ((/* implicit */int) min((var_27), ((((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_21 [i_5]))))));
            arr_28 [i_1] [i_1] = ((/* implicit */int) var_3);
        }
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
        {
            var_28 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1]))) : (arr_32 [i_1] [i_8 - 2] [(unsigned short)8]));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_11 [i_8 - 3]))));
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_37 [0U] [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((2147483647) >> (((/* implicit */int) var_8))))))), (11336530279175050224ULL)));
            var_30 = ((/* implicit */_Bool) -16777216);
            arr_38 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((arr_23 [i_1] [i_9] [i_1]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) min(((short)(-32767 - 1)), ((short)32044)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 401370119U))))))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        var_31 = ((/* implicit */short) arr_32 [i_10] [i_10] [i_10]);
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_17 [i_10])))) ? (max((((/* implicit */unsigned long long int) (signed char)29)), (arr_6 [i_10] [i_10]))) : (arr_12 [i_10] [i_10] [i_10])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-120)))) || (((/* implicit */_Bool) max((var_9), (arr_7 [i_10] [i_10] [i_10]))))))) : (min((max((512278791), (1282136357))), (((((/* implicit */_Bool) (short)-11762)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)16)))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_33 += ((/* implicit */signed char) arr_21 [i_11]);
        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */int) arr_21 [i_11])) >> (((((/* implicit */int) arr_44 [i_11])) + (136))))) : (((((/* implicit */_Bool) arr_18 [i_11] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))))));
    }
}
