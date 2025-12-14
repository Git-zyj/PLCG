/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192615
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) 1286403592);
        var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33800)) ? (6139673733270291384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40844)))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] = ((((/* implicit */unsigned long long int) ((3820924230U) / (max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))))) | (((4535305956109966588ULL) << (((((/* implicit */int) (unsigned short)61435)) - (61383))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_14 += ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_2 [i_2] [i_2])) && (((/* implicit */_Bool) -1714457940)))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_8 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1])))))));
                    arr_10 [i_1] [i_2] [(unsigned short)10] [i_2] = ((/* implicit */short) arr_8 [i_1]);
                }
            } 
        } 
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) max((3820924230U), (3820924227U)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] [8] |= (+((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_2 [i_4] [i_4]))))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) var_7);
        arr_16 [i_4] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (short)24664)), (474043069U)))));
        var_15 = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_20 [(unsigned char)14] = ((/* implicit */int) ((((/* implicit */int) (short)29445)) > (var_1)));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -2989247190555097454LL)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned short) arr_19 [i_5]);
            var_17 ^= max((((((/* implicit */long long int) arr_21 [i_5] [(_Bool)1] [(unsigned short)16])) / (arr_17 [i_5] [i_6]))), (((/* implicit */long long int) (-(((/* implicit */int) var_7))))));
            arr_24 [i_5] = ((/* implicit */int) 12959169756202589629ULL);
            arr_25 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((3820924230U), (655584554U))))));
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_29 [i_7] [i_5] = ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) (unsigned short)1)));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) ((unsigned char) 2989247190555097451LL)))));
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                arr_34 [i_5] [6U] = ((min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -924342050756792645LL)) ? (2097151) : (((/* implicit */int) (unsigned short)14164))))));
                arr_35 [i_5] [i_8] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                arr_36 [19U] [i_8] [3U] [3LL] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_2)) - (39724)))))) && (((/* implicit */_Bool) arr_31 [(short)17] [i_5]))))));
                arr_37 [i_9] [9] [i_8] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) arr_33 [7] [i_8] [i_9]))) ? (arr_18 [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)51369)) : (((/* implicit */int) arr_33 [i_9] [i_8] [i_5]))))))), (-924342050756792639LL)));
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_5] [(_Bool)1] [i_5])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) -751057350874341950LL)) ? (-5172621660757584290LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12] [i_8])))))));
                            var_20 += ((/* implicit */signed char) (+(-5LL)));
                        }
                    } 
                } 
                var_21 = -4018764401013112036LL;
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54953)) ? (((long long int) arr_33 [i_10] [(unsigned short)18] [i_5])) : (((/* implicit */long long int) arr_31 [i_5] [i_8]))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((signed char) 6918421654262641315ULL)))));
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -2989247190555097454LL)) && (((/* implicit */_Bool) (unsigned short)51372))));
                var_25 = ((/* implicit */unsigned char) (unsigned short)14634);
            }
            var_26 = ((/* implicit */int) ((11528322419446910298ULL) + (((/* implicit */unsigned long long int) 785465132))));
            arr_49 [i_8] = ((/* implicit */unsigned short) (+(6918421654262641329ULL)));
            var_27 = ((/* implicit */unsigned char) 924342050756792639LL);
        }
        arr_50 [i_5] = ((/* implicit */int) (~(arr_2 [i_5] [15U])));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((0) != (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min((-262230290), (((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (1803009468U)))))));
    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
}
