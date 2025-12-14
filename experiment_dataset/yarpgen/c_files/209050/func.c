/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209050
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+(max((((((/* implicit */int) var_9)) - (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_2 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4032)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) (unsigned short)61486)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4011))) : (arr_0 [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))))))));
        var_12 = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) arr_2 [i_0])), (arr_3 [i_0]))), (((/* implicit */long long int) ((unsigned int) (unsigned short)39300))))), (((/* implicit */long long int) (((~(2875435793U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))))));
        var_13 ^= ((((/* implicit */int) ((short) (~(((/* implicit */int) arr_1 [i_0])))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 4907952680955158836LL))) && (min((var_2), ((_Bool)1)))))));
        var_14 += ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39293))) : (159306469397304774LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_0]))))) : (((7U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) > (var_0));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((+(-8LL))) : (-9152661742451147330LL)));
        var_16 = ((/* implicit */unsigned int) arr_3 [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_1] [i_2 + 1] [0LL] = ((/* implicit */_Bool) -1LL);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) arr_8 [i_2 + 2] [i_2 + 2]);
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)26245)) | (((/* implicit */int) arr_6 [i_2])))))))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */_Bool) ((600926667U) << (((((/* implicit */int) arr_1 [i_2 + 2])) - (58285)))));
            var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (-8LL) : (((/* implicit */long long int) 1210863480U))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (4907952680955158836LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [10U] [i_2] [i_5]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (16711680U)))));
                var_21 = var_8;
            }
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */_Bool) arr_12 [18U] [i_6] [(unsigned short)16] [i_6] [i_6]);
        arr_22 [i_6] [1LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 460453641U)) & (min((((/* implicit */long long int) arr_17 [i_6])), (-7898343974252381299LL))))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)39288))))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_8 [(_Bool)1] [18U]), (((/* implicit */unsigned short) (_Bool)1))))) >> (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_11 [i_6] [i_7] [i_8] [i_6]))))))) ? (min((((/* implicit */long long int) arr_5 [i_7])), (-3043056224900657670LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) max(((_Bool)1), ((_Bool)1)))))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (arr_3 [i_7])))));
                            var_25 = (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (max((((arr_0 [i_7]) - (((/* implicit */long long int) 32752U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_9]))))))));
                        }
                        var_27 = ((((/* implicit */_Bool) ((long long int) min(((_Bool)1), ((_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((1452507058U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((((/* implicit */long long int) 2534713194U)) >= (-7092480655486645244LL)))))))) : ((+(min((((/* implicit */unsigned int) arr_13 [i_6] [i_7] [i_6] [i_6] [i_9])), (var_10))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((min((arr_20 [i_9] [i_7]), (arr_20 [i_6] [i_8]))) % (((unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (arr_26 [i_11] [i_9])));
                            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_6] [15LL] [i_8] [i_9] [i_9] [i_7]))));
                            arr_35 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_32 [i_6] [(short)0] [i_8] [i_9] [i_11] [i_7])), (-7419565005064873198LL))) == (min((8385981732113119448LL), (((/* implicit */long long int) 4294967286U))))))) & (((((/* implicit */int) ((arr_12 [i_6] [i_7] [i_7] [i_9] [(short)2]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) arr_13 [i_6] [i_7] [(unsigned short)11] [i_9] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [i_6] [i_7] [i_8] [i_9] [i_8])), (arr_24 [i_6] [i_6]))))));
                            arr_39 [i_7] [i_7] [i_8] [i_8] [i_7] = min((((/* implicit */unsigned int) ((_Bool) arr_31 [i_6] [i_7] [i_8] [i_7] [i_12]))), (((unsigned int) (short)256)));
                        }
                    }
                } 
            } 
        } 
    }
}
