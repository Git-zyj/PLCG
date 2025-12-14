/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23897
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
    var_15 = ((((/* implicit */_Bool) -8479708999965459728LL)) ? (((unsigned long long int) (unsigned char)125)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)56429), (((/* implicit */unsigned short) var_5)))))))) ? ((+(min((((/* implicit */long long int) (unsigned char)42)), (-6075272051260606704LL))))) : (var_3)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 -= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_9)), (-6075272051260606699LL)))));
    }
    for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_5 [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_1])))) & (((/* implicit */int) min((((/* implicit */short) (signed char)-119)), ((short)-20147))))))) ^ (6075272051260606709LL));
        arr_6 [i_1 - 2] &= ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) (short)20159)) ? (((/* implicit */int) ((_Bool) -6075272051260606709LL))) : (((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_1])) == (5278427992244657480LL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18242862312061800144ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (9223372036854775807LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                var_19 += (!(((/* implicit */_Bool) var_8)));
                arr_14 [12LL] &= ((/* implicit */short) (~(-7905588409985037092LL)));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */long long int) arr_9 [i_2]);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((5737852708916695356LL) <= (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                    arr_17 [i_3] = ((/* implicit */short) 6075272051260606701LL);
                }
                var_22 = ((/* implicit */signed char) arr_15 [i_3]);
                var_23 = (-((-(-7905588409985037104LL))));
            }
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_24 = ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_2))));
                arr_21 [i_1 - 1] [i_2] [i_5] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) var_5))) * ((-(1992373498888533787LL))));
                arr_22 [i_5] = arr_13 [i_1 - 1] [i_1];
            }
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_1 + 1] [i_6] [i_7] [i_7] [i_8] &= ((/* implicit */int) ((unsigned long long int) (_Bool)0));
                        arr_34 [i_7] [i_7] [i_2 + 2] [i_7] = ((/* implicit */signed char) ((short) (signed char)2));
                    }
                    arr_35 [i_7] [10] [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)19)))) >= (((/* implicit */int) (_Bool)1))));
                }
                arr_36 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 5362197602863528873LL)) ? (((/* implicit */unsigned long long int) var_9)) : (9739424319183895229ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 23; i_9 += 2) 
                {
                    arr_39 [i_9] [i_6] [i_2 + 1] [i_1] |= ((/* implicit */unsigned char) ((short) (signed char)-27));
                    var_25 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) arr_38 [(signed char)4] [i_6] [i_1])) : (((/* implicit */int) var_7))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [(unsigned short)9]))) | (var_10))))));
                    var_27 = ((/* implicit */unsigned int) (unsigned char)42);
                    var_28 = ((/* implicit */short) ((((1381047844677065777ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9 - 2] [i_9 - 1] [i_9 + 2] [i_9 - 1])))));
                }
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                var_29 *= ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)18786)));
                var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_12 [i_1] [i_1] [i_1] [i_10]), ((signed char)66)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)207))))) : (max((var_12), (((/* implicit */unsigned int) (signed char)2)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-65)) + (((/* implicit */int) (unsigned char)235))))) && (((/* implicit */_Bool) var_2)))))));
                var_31 = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_12 [i_1] [i_10] [i_10] [i_10])) ? (var_9) : (((/* implicit */int) (short)13223)))))), (((/* implicit */int) min((max((((/* implicit */short) (unsigned char)213)), ((short)-18794))), (((/* implicit */short) var_6)))))));
            }
            arr_46 [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) max(((unsigned short)35133), (((/* implicit */unsigned short) (unsigned char)213))))))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) - (-5373698687161853484LL))));
            var_32 = ((/* implicit */short) (+(arr_41 [i_1])));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        var_33 -= ((/* implicit */short) max((((var_10) - (((/* implicit */long long int) ((/* implicit */int) (short)-18793))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)64)))))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+((~(((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (unsigned short)35120)) : (((/* implicit */int) (short)5804)))))))))));
                        var_35 = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_18 [i_13] [i_13] [i_12] [i_1 - 1]), (((/* implicit */long long int) arr_8 [i_1 + 1] [i_10])))));
                        arr_52 [i_10] = ((/* implicit */int) 17092370189858039302ULL);
                    }
                } 
            } 
            var_36 = ((((/* implicit */_Bool) 10063286169932942421ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_38 [i_14] [i_1 - 2] [i_1 + 1]), (((/* implicit */signed char) (_Bool)1)))))));
            arr_55 [i_14] = ((/* implicit */short) min((arr_47 [i_1 - 2]), (((((/* implicit */_Bool) arr_47 [i_1 - 1])) ? (arr_47 [i_1 - 2]) : (arr_47 [i_1 - 1])))));
            var_38 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
        }
    }
    for (int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        var_39 = ((/* implicit */short) min((((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_8 [i_15] [i_15]))))) || (((/* implicit */_Bool) arr_2 [i_15])))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) >= (((/* implicit */int) arr_8 [i_15] [i_15]))))));
        var_40 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-15)), (((unsigned char) arr_40 [i_15] [i_15] [i_15]))));
    }
    var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) / (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_10)))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_5))))));
}
