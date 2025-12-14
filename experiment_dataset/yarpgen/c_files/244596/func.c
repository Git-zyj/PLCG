/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244596
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) var_13);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_1] [i_1 - 1] = ((((/* implicit */int) arr_3 [i_0 + 3] [i_1])) ^ (((/* implicit */int) arr_3 [i_0 + 4] [i_1])));
            arr_6 [i_1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (short)28320);
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
            arr_7 [(_Bool)1] &= ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_16 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_3 [i_0] [16ULL])))));
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) ((max(((_Bool)1), ((_Bool)1))) ? (17067528455537345908ULL) : ((~(17803421601879563431ULL)))));
            var_17 = ((/* implicit */short) max((var_17), (var_12)));
            arr_11 [(short)11] = 6912771774419528296ULL;
        }
        var_18 = ((/* implicit */long long int) 1379215618172205723ULL);
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_1 [i_3 - 2]))))));
        var_20 = ((/* implicit */long long int) (~(var_13)));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 16466316413756826907ULL))));
        arr_16 [i_3] = ((5550178896087083605ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_22 = (i_4 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)4] [i_4] [i_4]))))) << (((((((arr_20 [i_4]) + (2147483647))) >> (((((/* implicit */int) (short)14314)) - (14300))))) - (77254)))))) : (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)4] [i_4] [i_4]))))) << (((((((((arr_20 [i_4]) + (2147483647))) >> (((((/* implicit */int) (short)14314)) - (14300))))) - (77254))) + (31622))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_6 - 1])) || (((/* implicit */_Bool) arr_24 [i_6 - 1] [i_4] [i_6 - 1] [i_6]))));
                        arr_27 [i_4] [i_4] [6LL] = ((/* implicit */unsigned long long int) ((_Bool) 17781900615963821866ULL));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_28 [i_4] [i_5] [i_6] [11] = ((/* implicit */_Bool) ((signed char) arr_9 [i_5] [i_5] [i_6 - 1]));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 1])) ? (((/* implicit */int) arr_25 [i_6 - 1])) : (((/* implicit */int) arr_25 [i_6 - 1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        var_26 *= ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) 4698230298998299840LL)) || (((17870283321406128128ULL) > (((/* implicit */unsigned long long int) -6382131822510261573LL))))))), (((short) 1449104655))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_0))));
        var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (max((arr_22 [10LL]), (arr_22 [0ULL])))));
        /* LoopNest 3 */
        for (short i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(arr_17 [i_11]))))))) : ((~(10928920154791118344ULL)))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5550178896087083605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37679))) : (arr_24 [i_8] [8ULL] [i_8] [i_10])))))))));
                    }
                } 
            } 
        } 
    }
    var_31 = var_6;
    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((4719676966640460ULL) - (4719676966640455ULL))))))));
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_3))));
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)57449), (((/* implicit */unsigned short) var_0))))) ^ ((-(((/* implicit */int) (_Bool)1))))))))))));
}
