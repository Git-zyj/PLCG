/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248232
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
    var_15 = ((/* implicit */short) (~(max((-7530694334694767809LL), (var_3)))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((long long int) ((long long int) -1532729465966656583LL))), (max((var_8), (((/* implicit */long long int) var_4)))))))));
        arr_4 [i_0] = min((6475027688130677018LL), (((/* implicit */long long int) (_Bool)0)));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_9 [i_1] = (~(6475027688130677018LL));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_2] [6LL] [6LL] [i_5] &= ((long long int) min((134217696LL), (1093029009718706341LL)));
                            var_17 = ((/* implicit */_Bool) ((short) max((max((6865085386485551433LL), (var_6))), (((((/* implicit */_Bool) 6680252541405612402LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8192))))))));
                        }
                        arr_20 [i_1 - 1] [2LL] [i_1 - 1] |= ((/* implicit */unsigned short) (short)2047);
                    }
                } 
            } 
            arr_21 [i_1 - 2] = (-(var_12));
        }
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max(((-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)13810)))))), (((/* implicit */int) var_10)))))));
        arr_22 [0LL] [9LL] = ((/* implicit */unsigned short) min((max((max((6475027688130677018LL), (((/* implicit */long long int) (unsigned short)32640)))), (4096LL))), (min((min((((/* implicit */long long int) var_14)), (var_12))), ((+(7564614336676733948LL)))))));
        arr_23 [i_1] = 532563096417856214LL;
        var_19 = max((min((6121956169647356525LL), (((((/* implicit */_Bool) 72057594029539328LL)) ? (-12260172187434679LL) : (var_7))))), (-8743161774973628718LL));
    }
    for (long long int i_6 = 4; i_6 < 17; i_6 += 1) /* same iter space */
    {
        arr_26 [(short)0] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) max(((unsigned short)34552), (((/* implicit */unsigned short) (short)7056)))))), (8649988417043188365LL)));
        var_20 = min((((/* implicit */long long int) (unsigned short)63289)), (-8712356271742333381LL));
        arr_27 [i_6] [i_6 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 35184371564544LL)))))));
    }
    for (long long int i_7 = 4; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_32 [i_7 - 2] = -4182861459852005418LL;
        arr_33 [i_7 - 4] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11017))));
        arr_34 [i_7] [i_7 - 2] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) max((var_12), (var_11)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    var_21 = min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47051))) : (448LL))), ((-(((long long int) 2665200362837568650LL)))));
                    var_22 = ((/* implicit */long long int) (_Bool)0);
                    arr_44 [i_8] [i_9] [i_9] = -1LL;
                }
            } 
        } 
        var_23 &= ((/* implicit */short) min((min((((/* implicit */long long int) (~(((/* implicit */int) (short)1016))))), ((-(var_11))))), (-6475027688130677017LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_24 -= ((/* implicit */unsigned short) var_4);
                arr_51 [i_8] [i_11] [i_11] = ((/* implicit */long long int) (!((_Bool)1)));
                arr_52 [i_11] = (+(var_0));
            }
            for (long long int i_13 = 3; i_13 < 15; i_13 += 3) 
            {
                var_25 = ((/* implicit */long long int) (short)-1);
                var_26 = ((/* implicit */long long int) var_13);
                arr_55 [i_11] [i_11] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            }
            for (short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((long long int) (_Bool)0))));
                var_28 = ((/* implicit */unsigned short) ((_Bool) (~(var_8))));
                var_29 = ((long long int) var_11);
                var_30 -= ((/* implicit */unsigned short) (short)-13184);
            }
            var_31 = ((/* implicit */unsigned short) ((long long int) var_0));
        }
        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 4) 
        {
            var_32 -= min((((/* implicit */long long int) max((max(((short)-23530), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((_Bool) (_Bool)1)))))), (((long long int) ((short) -5003191702661688719LL))));
            arr_62 [i_8] [i_8] = max((min(((-(1152921229728940032LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33430)))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)22200))))));
        }
    }
    for (long long int i_16 = 1; i_16 < 19; i_16 += 1) 
    {
        arr_65 [i_16] [i_16] = ((/* implicit */long long int) ((unsigned short) min((max((7481600550274616515LL), (144110790029344768LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((long long int) var_1)))));
        arr_66 [(_Bool)1] = min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15))) : (-1LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11313))))));
    }
}
