/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249099
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
    var_14 = ((/* implicit */unsigned int) ((int) 1660555357U));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */int) ((unsigned int) max((288230375883276288ULL), (((/* implicit */unsigned long long int) 1312602863153620079LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_6 [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned char) arr_0 [i_1]);
            var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 9368375246608460138ULL)) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (28))))) : (((/* implicit */int) arr_1 [i_1])))));
            var_18 = ((/* implicit */short) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) % (9078368827101091480ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned short)61899), (((/* implicit */unsigned short) var_1))))), (arr_4 [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_7 [i_2] [i_2] [i_2])))));
                var_20 = ((/* implicit */_Bool) min((max((576460752302374912ULL), (((/* implicit */unsigned long long int) (unsigned char)56)))), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_2])))));
                var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) max(((short)-25719), (((/* implicit */short) var_5))))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26553)) ? (11770168756740850339ULL) : (2676351051364231914ULL)));
                var_23 = ((/* implicit */signed char) arr_1 [i_2]);
            }
        }
        var_24 = ((/* implicit */_Bool) -369067154);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_5 - 1] [(signed char)14] [(signed char)14] [i_6] [(signed char)14] [i_8] = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            arr_26 [i_1] [i_5] [(unsigned short)12] [i_6] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)50)) > (((/* implicit */int) (_Bool)0))));
                            arr_27 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 274877890560LL)) ? (((/* implicit */int) (unsigned short)61899)) : (((/* implicit */int) (short)4080))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_30 [(unsigned short)14] [i_9] [i_1] = ((/* implicit */unsigned short) arr_7 [i_5] [i_5] [i_5 - 1]);
                var_25 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)61259)) ? (((/* implicit */int) (_Bool)0)) : (1533955825))));
                arr_31 [i_9] [i_5 - 1] [i_1] = ((/* implicit */unsigned char) -896142093);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_10] [i_5] [i_10]))));
                var_27 += ((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_1])) >> (((((/* implicit */int) (short)15360)) - (15330)))))));
                var_28 = ((/* implicit */short) min((var_28), (arr_17 [i_5 - 2] [i_5 + 1] [i_5 - 2])));
            }
            arr_35 [(unsigned char)0] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        }
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (9368375246608460138ULL)))) ? (((unsigned long long int) ((short) 287104476244869120LL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)200))))));
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            {
                arr_40 [i_11] [i_12] = ((/* implicit */long long int) (short)4080);
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    for (short i_14 = 2; i_14 < 15; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                        {
                            {
                                var_30 &= ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) (short)24576)) || (((/* implicit */_Bool) (unsigned char)237)))) || (((/* implicit */_Bool) (unsigned char)200)))));
                                var_31 = max((max((arr_46 [8ULL] [(unsigned char)5] [i_14] [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 2]), (arr_46 [i_15] [i_15] [15U] [i_15] [i_14 + 2] [i_14 + 4] [i_14 - 2]))), (arr_47 [i_15] [i_13] [i_15] [i_15] [i_14 - 1] [i_13] [i_14 + 3]));
                                var_32 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) ((arr_42 [i_11] [i_11] [i_11]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)19219)))))) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (short)16384))))));
                            }
                        } 
                    } 
                } 
                var_33 = var_11;
            }
        } 
    } 
}
