/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200917
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (max((((/* implicit */unsigned long long int) (signed char)83)), (18262534889371320451ULL))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) ((((long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1]))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((17092434875832873466ULL) - (17092434875832873438ULL))))))));
            arr_4 [i_0] [i_0] = ((/* implicit */long long int) (((-(1354309197876678149ULL))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_13 ^= ((/* implicit */unsigned int) ((short) ((((_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) arr_6 [i_0] [10ULL] [i_1] [i_0])))));
                arr_9 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((+(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) -8376218722594022821LL)))))), (((/* implicit */unsigned long long int) ((-8376218722594022821LL) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-60);
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_0 [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_4] [i_0] = ((/* implicit */long long int) (unsigned char)10);
                            var_15 = (_Bool)1;
                            arr_27 [i_0] [10U] [i_6] [i_4] [i_4] [i_0] = ((/* implicit */short) (_Bool)1);
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 131070ULL)))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            var_16 += ((/* implicit */_Bool) ((((arr_23 [i_8] [i_6] [i_5] [i_4] [i_0]) == (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_23 [16U] [16U] [i_5] [16U] [(unsigned char)4]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_8 + 1] [i_6] [i_0] [i_0]))) >= (arr_0 [i_6]))))));
                            arr_32 [i_0] [i_5] [i_0] [(unsigned char)8] = min(((-(arr_21 [i_5] [(_Bool)1] [i_8 - 1] [i_8 - 1] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)234)), ((short)12477)))));
                            arr_33 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [2] [i_6] [2]);
                        }
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            arr_36 [i_9] [i_0] [i_4] [17U] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)252))))));
                            var_17 = ((/* implicit */int) min((max((arr_35 [i_9 + 1] [i_6] [i_6]), (arr_18 [i_0] [i_4] [i_0] [i_9]))), (((/* implicit */unsigned int) max((arr_24 [i_5] [i_9 + 1] [14LL] [i_5] [14LL]), (((/* implicit */unsigned char) arr_1 [i_0])))))));
                            arr_37 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                            arr_38 [i_9] [i_4] [i_4] [i_0] [i_6] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_0 [i_9 - 1])))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (249425769U))))));
                            arr_43 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (short)12477);
                        }
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_6] [i_4] [i_4] [i_4] [i_0])), (0LL)))))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */int) arr_21 [15LL] [i_6] [i_0] [i_4] [i_0]);
                            arr_47 [i_0] [i_0] [i_5] [i_6] [i_11] = arr_19 [i_0] [i_4] [i_5] [(_Bool)1];
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_21 += ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_5 [i_6]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))) <= (((unsigned long long int) 4267222198U))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_12 [i_12] [i_5] [i_12]))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)12488))));
        }
    }
    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_24 *= ((/* implicit */unsigned long long int) (unsigned char)186);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_14 = 2; i_14 < 9; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_15 = 2; i_15 < 8; i_15 += 4) 
            {
                arr_60 [i_14] [i_14] = ((/* implicit */long long int) var_0);
                arr_61 [i_13] [i_15 - 1] = (!(((/* implicit */_Bool) var_5)));
            }
            for (unsigned int i_16 = 4; i_16 < 7; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 6; i_17 += 1) 
                {
                    for (unsigned short i_18 = 3; i_18 < 8; i_18 += 1) 
                    {
                        {
                            arr_68 [i_14 - 2] [i_14 - 2] [i_18 - 1] [i_17] = ((/* implicit */_Bool) 131092ULL);
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_13])))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)232));
                arr_69 [i_13] [i_14 - 1] [i_16] = ((/* implicit */unsigned char) ((short) ((int) arr_39 [i_16] [i_16] [i_14] [i_13] [i_16])));
            }
            arr_70 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) -37096124)) : (6675692544250682338ULL)));
            var_27 ^= ((/* implicit */int) ((unsigned int) (unsigned char)255));
            var_28 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        }
        arr_71 [i_13] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775801LL)) || (((/* implicit */_Bool) (short)7904))))), (3872648297U)));
        arr_72 [i_13] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [i_13] [i_13]))))), (max((arr_25 [i_13] [i_13] [i_13] [(unsigned char)7] [i_13]), (arr_25 [i_13] [i_13] [i_13] [i_13] [i_13])))));
    }
    var_29 |= ((/* implicit */unsigned short) var_4);
    var_30 &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((var_8) + (-9223372036854775796LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
}
