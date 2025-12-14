/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54104
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
    var_12 |= ((/* implicit */unsigned short) ((short) 0));
    var_13 = ((/* implicit */int) min((var_13), ((-(((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((/* implicit */int) ((short) 1849213287))))) ^ (min((((((/* implicit */_Bool) -2038903711)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_11))))));
        var_15 = ((/* implicit */unsigned short) -1);
        arr_4 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((_Bool)1) ? (((-22) | (arr_7 [i_4]))) : (((/* implicit */int) (_Bool)1)))))));
                            arr_16 [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)34200)) ^ (((/* implicit */int) var_11)))))), (((int) (unsigned short)49741))));
                            var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((short) var_1))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_13 [i_0])))))), (((((/* implicit */_Bool) (unsigned short)29739)) ? ((-(((/* implicit */int) (signed char)19)))) : (((/* implicit */int) (_Bool)1))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5])) ? (arr_7 [(_Bool)1]) : (((/* implicit */int) arr_3 [i_1])))) ^ (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)14] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */signed char) ((_Bool) (((!(((/* implicit */_Bool) arr_14 [i_1] [i_3])))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_5])))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (arr_8 [i_0] [i_0] [i_0] [7])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [i_1]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) <= (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) arr_13 [(_Bool)1]);
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (((((_Bool)0) ? (arr_18 [i_0] [i_1] [(signed char)1] [i_3] [i_6] [i_1]) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_6] [(signed char)9] [i_6])))) >= ((((_Bool)1) ? (35380442) : (557619839)))))) - (((/* implicit */int) (short)22226))));
                            arr_22 [(signed char)16] [15] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((2038903710) > (-555853297)));
                        }
                        arr_23 [i_0] [(short)15] [(_Bool)1] [(signed char)4] = var_4;
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) arr_2 [i_7]))) ? (((int) arr_10 [(signed char)13] [i_7] [i_7])) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (((_Bool)1) || (arr_26 [i_7])))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)24398)) + (((/* implicit */int) var_10))));
    }
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_24 += ((_Bool) (_Bool)1);
        var_25 = ((/* implicit */_Bool) max((min((arr_17 [i_8] [(_Bool)1] [(short)5] [i_8] [i_8]), ((unsigned short)20793))), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])));
        var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8])) ? (arr_9 [18] [i_8] [i_8]) : (arr_9 [i_8] [(unsigned short)14] [i_8]))) - (((/* implicit */int) ((arr_9 [i_8] [(_Bool)1] [i_8]) != (((/* implicit */int) var_9)))))));
        arr_30 [i_8] = ((/* implicit */_Bool) max((204290956), (((/* implicit */int) (short)-17038))));
        var_27 = ((/* implicit */int) ((((((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-17038)))) / (max((arr_12 [i_8] [i_8] [i_8] [i_8] [(unsigned short)3]), (((/* implicit */int) arr_27 [i_8])))))) == (max((((((/* implicit */int) arr_24 [i_8])) ^ (((/* implicit */int) arr_24 [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [11] [i_8] [(_Bool)1] [i_8])))))))));
    }
}
