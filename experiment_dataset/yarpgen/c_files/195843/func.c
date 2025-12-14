/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195843
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
    var_11 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((unsigned short)3701), ((unsigned short)61835)))))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((int) ((((/* implicit */int) var_2)) ^ (var_9)))))))));
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3731)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((-2039238303) + (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)9))))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)3701)))) < (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_14 [i_1] [i_1 - 1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) (unsigned short)61835)))));
                        arr_15 [i_0] [i_1 + 2] [i_0] [i_2 - 1] [i_1] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (signed char)95))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1813018574) / (((/* implicit */int) (short)29092))))) ? (((((/* implicit */int) (short)-29456)) - (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_0])) ? (arr_9 [i_2 + 1] [i_1 + 1] [i_1] [i_0]) : (((/* implicit */int) var_0))))) ? (((int) var_5)) : (((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) (unsigned short)3715)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            var_17 = ((/* implicit */signed char) max((max((((/* implicit */int) arr_19 [i_4] [i_4] [i_5 + 3])), (((arr_18 [i_4] [i_5 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)61821)))))), (min((0), (642781473)))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_18 [i_5 + 3] [i_4])))))) >= (var_8)))) - (((/* implicit */int) var_2))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_19 [i_5 + 1] [i_5] [i_5 - 1]))) < (((/* implicit */int) ((_Bool) ((-8) < (((/* implicit */int) (short)29099))))))));
            arr_20 [i_4] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) - (21)))))) ? (((/* implicit */int) (short)-20471)) : (((/* implicit */int) (!(arr_18 [i_5 + 1] [i_4]))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned char) arr_18 [i_6] [i_6]));
            arr_23 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20190)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27600)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))) : (((var_8) << (((33554416) - (33554390)))))));
            var_21 = ((/* implicit */unsigned short) arr_19 [i_4] [i_4] [i_6]);
            arr_24 [i_6] = ((unsigned short) (signed char)-28);
        }
        for (unsigned short i_7 = 3; i_7 < 22; i_7 += 2) 
        {
            arr_28 [i_4] = ((/* implicit */short) var_3);
            var_22 = ((/* implicit */short) var_8);
            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_9), (8)))) ? (arr_25 [i_4] [i_4] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (4095305294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_8 - 1])))));
            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_21 [i_8 + 1])));
        }
        arr_32 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_31 [i_4] [i_4] [i_4]))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4])) >= (((/* implicit */int) var_1))))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)32768)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3671)) || (((/* implicit */_Bool) arr_16 [i_4]))))))))));
        arr_33 [i_4] = ((signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)3663)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_17 [i_4] [i_4]))));
    }
    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        arr_37 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_9] [i_9] [i_9])) : (var_9))), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_17 [i_9] [i_9])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31078))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_22 [i_9] [i_9])))))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-31084)) : (((/* implicit */int) var_4)))) - ((+(var_9)))))))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-20471))))))) : (max((((/* implicit */int) var_1)), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_0))))))));
}
