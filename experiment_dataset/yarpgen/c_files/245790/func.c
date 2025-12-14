/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245790
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (16055033789330619242ULL))))) >= (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))))) + (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)18922)), (2147483648U)))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) 2147483651U)) : (arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14095)))))) | (arr_1 [i_0])));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)30386)), (arr_1 [i_0])))) ? (arr_0 [i_0]) : ((~(arr_1 [i_0]))))), (((/* implicit */long long int) ((signed char) 8388604U)))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -927231094)))) | (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */long long int) -927231094)) : (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (arr_1 [i_0])))), (((0ULL) & (11852060664289309664ULL)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] = ((max((((unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_2])), (((/* implicit */unsigned long long int) (unsigned short)5872)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) || ((_Bool)1)))))));
                        arr_13 [i_3 - 1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_2])) << (((var_6) + (8535146930438123829LL)))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 4286578679U)) : (4105719765872895491LL)))))) ? (((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18042))) : (-3101761832527550984LL))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_1])) | (arr_11 [i_3] [i_1] [i_1] [i_0]))) & (max((arr_11 [i_3] [i_1] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3 - 1]))))))));
                        var_13 = ((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_2]));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) var_4);
        var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14119))) : (((4848121416041544683ULL) / (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])))))), (max((((unsigned long long int) arr_4 [i_4] [i_4] [i_4])), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) var_7)))))))));
        arr_17 [i_4] = ((/* implicit */short) ((((max((arr_0 [i_4]), (4105719765872895488LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14095))))) * (((/* implicit */long long int) var_2))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_16 = var_2;
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3415)) ? (((/* implicit */long long int) 1667513878U)) : (-4105719765872895492LL)));
    }
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 0LL))));
        var_19 |= ((/* implicit */_Bool) ((unsigned char) max((max((((/* implicit */int) arr_20 [i_6] [i_6])), (-1892213660))), (((/* implicit */int) arr_18 [i_6])))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)-35))));
    }
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_21 = ((/* implicit */_Bool) var_2);
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-99))))))) <= (max((((15140558132613798846ULL) >> (((arr_19 [i_7]) - (3485757515573502924ULL))))), (((unsigned long long int) var_1))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2147483648U), (((/* implicit */unsigned int) arr_16 [i_7] [i_7]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7])) || (((/* implicit */_Bool) -2147483634))))) : (((((/* implicit */int) var_0)) << (((arr_19 [i_7]) - (3485757515573502968ULL))))))))));
        var_24 &= ((/* implicit */_Bool) max((arr_19 [i_7]), (((/* implicit */unsigned long long int) ((int) arr_19 [i_7])))));
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */_Bool) -1880879857749022784LL);
        arr_29 [i_8] [i_8] = ((/* implicit */long long int) ((short) ((unsigned int) 15655913446696092137ULL)));
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((max((((var_2) << (((var_5) - (2043089666U))))), (((unsigned int) -1LL)))), (((/* implicit */unsigned int) var_4)))))));
    var_26 = ((/* implicit */unsigned int) 15140558132613798826ULL);
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1892213686)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3306185941095752770ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) max((0), (((/* implicit */int) (unsigned short)0))))) <= (var_1))))) : (-4105719765872895496LL)));
}
