/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223469
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
    var_11 = ((/* implicit */short) ((max((((/* implicit */long long int) ((unsigned short) var_2))), (((((/* implicit */long long int) 0)) - (18014398509481856LL))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (14792146318522888362ULL))))));
    var_13 = ((/* implicit */unsigned int) max((var_5), (var_5)));
    var_14 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_15 = max((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)17] [i_2])) ? (-923148894) : (((/* implicit */int) (unsigned char)0))))));
                        arr_11 [(signed char)1] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (+(max((((/* implicit */int) (unsigned char)131)), (arr_1 [i_3])))))), (max((-5473319970957267853LL), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                        var_16 ^= ((/* implicit */unsigned short) max((max((arr_1 [(unsigned short)10]), (arr_1 [i_0]))), (arr_1 [i_0])));
                        var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 144241689)) : (arr_8 [i_0] [i_1] [i_0] [i_3]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) - (var_3)))));
                        var_18 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (signed char)-17)))));
                    }
                } 
            } 
        } 
        var_19 |= ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) | (var_4)))))) && (((/* implicit */_Bool) var_9)));
        arr_12 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)9661))));
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 = ((((/* implicit */int) (signed char)68)) / (((/* implicit */int) (unsigned char)255)));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) arr_1 [i_4]))), (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_16 [i_4] [i_5] [i_4]) : (((/* implicit */long long int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [14LL]))) <= (var_9)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)4874)) <= (((/* implicit */int) (signed char)-66)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 2047LL))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)103)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4] [i_4]))))) && (((/* implicit */_Bool) var_0))))) : (arr_19 [i_4] [3U] [i_4] [i_4]))))));
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((signed char) -1386799802))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_10 [i_7] [i_7] [i_7]))))))), (((((/* implicit */_Bool) ((4446797) | (((/* implicit */int) arr_7 [i_7] [i_7]))))) ? (((/* implicit */int) ((signed char) var_7))) : (max((var_7), (var_10)))))));
        arr_25 [i_7] = ((/* implicit */short) (+(max((((/* implicit */long long int) arr_2 [i_7] [i_7] [i_7])), (var_5)))));
        arr_26 [5] = ((/* implicit */_Bool) ((unsigned char) max((((((/* implicit */_Bool) (unsigned short)61529)) ? (-1) : (-206359514))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_7] [i_7])) < (((/* implicit */int) arr_2 [i_7] [(_Bool)0] [(_Bool)0]))))))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) var_7);
        arr_30 [i_8] [i_8] = ((/* implicit */int) (+((-(((1840285764U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_8])))))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_31 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_27 [i_8]))) && (((/* implicit */_Bool) ((signed char) arr_29 [i_8])))))), (max((((/* implicit */long long int) var_10)), (max((var_4), (((/* implicit */long long int) var_9))))))));
        var_26 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)83)))) ? (max((((/* implicit */long long int) -465627817)), (-2048LL))) : (((/* implicit */long long int) max((327065244U), (((/* implicit */unsigned int) (unsigned char)19)))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)53)) | (var_7))) | ((-(((/* implicit */int) var_2))))))) : (((-2248517976061296064LL) / (((/* implicit */long long int) arr_8 [i_8] [i_8] [i_8] [i_8])))));
    }
}
