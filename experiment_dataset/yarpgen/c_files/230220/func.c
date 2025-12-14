/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230220
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_11 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2304717109306851328ULL) <= (min((arr_1 [21] [i_0]), (((/* implicit */unsigned long long int) 4294967295U)))))))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)10046)) ? (16142026964402700287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10039))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (2304717109306851349ULL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_13 |= ((/* implicit */unsigned char) arr_3 [(unsigned short)18]);
        var_14 = ((/* implicit */unsigned long long int) var_5);
        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2]);
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_1 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16142026964402700288ULL)) ? (arr_8 [0ULL]) : (((/* implicit */unsigned long long int) max((1006043440U), (((/* implicit */unsigned int) (unsigned char)3)))))));
                    arr_13 [(signed char)10] [(unsigned char)10] [i_2] = ((/* implicit */long long int) arr_7 [i_4]);
                    var_18 = ((/* implicit */short) (+(max((((unsigned int) var_5)), (((/* implicit */unsigned int) var_2))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (unsigned short i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((3716416748U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((short) (short)10040));
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) >= ((-(((/* implicit */int) var_6)))))) ? (555002098U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_2] [i_2] [7ULL] [7ULL]))))));
                        }
                        var_23 = var_8;
                        arr_24 [i_2] [i_5] [(unsigned short)10] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [1U]) > (arr_2 [14ULL]))))) / (((((/* implicit */_Bool) (signed char)12)) ? (558476351U) : (1594022766U))))), (((((/* implicit */_Bool) 1467603826)) ? (3288923855U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))))));
                    }
                } 
            } 
        } 
    }
    var_24 += ((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}
