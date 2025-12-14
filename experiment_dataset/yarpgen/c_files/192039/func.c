/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192039
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
    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1617)))))));
    var_11 *= ((unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)34183)) : (((/* implicit */int) (signed char)-3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_13 = ((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_0] [i_1 - 1]);
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_0] [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(var_9)))) ? (((unsigned int) arr_11 [i_4])) : (((/* implicit */unsigned int) (+(var_3))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)8339)), (3LL)));
                    var_20 = ((/* implicit */int) arr_11 [i_6 + 3]);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) (unsigned short)34190)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_4] [i_5] [i_6] [i_5 + 2])) : (arr_14 [i_4] [i_6 + 2])))));
                    var_22 = (unsigned short)17325;
                    var_23 = ((/* implicit */signed char) min((var_23), (arr_18 [i_4] [i_5] [i_4])));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_24 = ((/* implicit */short) (+((~(((/* implicit */int) ((unsigned char) 979459131)))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), ((+(var_8)))))) ? (7663493523679567511LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_7] [i_7])) != (var_8)))))));
        var_26 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) (unsigned short)48211)), (arr_19 [i_7] [i_7]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)43466)))) >= (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)128))))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_4);
}
