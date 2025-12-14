/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191494
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [(_Bool)1] [i_2] [1] [(unsigned char)12] [i_0] = ((/* implicit */short) ((unsigned long long int) var_0));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_16 [i_2 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-6031)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) > (var_6)));
                            var_10 = ((/* implicit */_Bool) (short)1440);
                        }
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_11 = ((/* implicit */long long int) (short)1440);
                            var_12 = ((/* implicit */unsigned short) arr_12 [i_5] [i_5] [i_2]);
                        }
                        var_13 += ((/* implicit */int) arr_5 [i_0]);
                        var_14 = ((/* implicit */unsigned char) ((((_Bool) min((arr_4 [i_1]), (((/* implicit */short) arr_13 [i_2] [i_2] [i_1] [(unsigned char)1]))))) ? (((/* implicit */int) (short)-8358)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_2 + 3] [i_3]))));
                        arr_20 [i_0] [i_1] [i_2] = min((((/* implicit */short) arr_9 [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_3 - 3] [(unsigned char)4] [i_0 + 2]));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) arr_3 [(unsigned char)2] [(unsigned char)2] [(_Bool)1]);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1] [(_Bool)1] [(short)16] [i_0] [10ULL])))))));
        arr_21 [i_0 + 1] = ((int) (+(var_0)));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))) > (67108863U))) ? (((/* implicit */int) ((-633073429) > (((/* implicit */int) (short)-2534))))) : (((/* implicit */int) (!(((((/* implicit */int) var_5)) <= (19)))))))))));
        var_19 = ((/* implicit */int) min((var_19), ((-(min((((((/* implicit */_Bool) 1600328476U)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) (short)1452)))), (((/* implicit */int) arr_23 [i_6]))))))));
        arr_24 [i_6] = (!((_Bool)1));
        arr_25 [i_6] = ((/* implicit */int) 2741978815U);
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20103)) ? ((-(arr_26 [i_7]))) : (((/* implicit */int) ((((/* implicit */int) ((277367516553092355ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20103)))))) != (((var_3) >> (((232407769) - (232407760))))))))));
        arr_28 [i_7] = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)9077)) != (arr_26 [i_7]))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-20081))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_5)))))))))));
        arr_29 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [i_7]) * (((/* implicit */int) ((((/* implicit */int) (short)32767)) < (arr_26 [i_7]))))))) ? (((arr_23 [i_7]) ? ((~(((/* implicit */int) (unsigned short)9017)))) : (((/* implicit */int) max(((short)25909), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_23 [i_7]))))))));
    }
    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)30561))) ? (((/* implicit */int) (short)20081)) : (((/* implicit */int) (short)-20064))))) ? (6979719641943876388ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 277367516553092383ULL)) ? ((-(54990222))) : (((/* implicit */int) (unsigned short)14846)))))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (int i_10 = 2; i_10 < 18; i_10 += 3) 
            {
                for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_38 [i_8] [i_11] [i_11] [i_11] [i_10] [i_11 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11] [i_10] [i_9] [i_11]))) : (233206915U)));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_41 [i_11] [i_11] = ((/* implicit */_Bool) ((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 387467530)) ? (((/* implicit */int) arr_37 [i_11] [i_9] [i_10] [i_12])) : (((/* implicit */int) var_9)))))) ^ (14)));
                            arr_42 [i_8] [i_8] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) var_7);
                            arr_43 [i_8 - 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29969)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30554))) == (min((((/* implicit */unsigned int) -14)), (767086159U)))))))));
                        }
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) (+(1161574526122820382LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_8] [i_8 - 2] [i_9] [i_9] [i_9] [i_9] [i_11 + 1]))) : (3410205935U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8] [i_9]))))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((~(max((((/* implicit */unsigned long long int) arr_33 [i_10] [i_8 - 2])), (arr_27 [i_11]))))) | (((/* implicit */unsigned long long int) arr_32 [(_Bool)0] [i_9] [i_10 + 3])))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (12ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    }
    var_26 = (short)-29969;
    var_27 += ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    var_28 -= var_8;
}
