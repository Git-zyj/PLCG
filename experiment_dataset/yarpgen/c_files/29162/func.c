/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29162
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
    var_10 = ((/* implicit */unsigned long long int) ((var_2) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2465284689U))), (((/* implicit */unsigned int) ((_Bool) var_8))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-4568)))) << (((long long int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) -9186518620084050279LL);
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_7))) % ((+(((((/* implicit */int) (short)32767)) / (((/* implicit */int) (short)-4579))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4571)) ? (var_5) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_5)))) + (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_12 = var_8;
                    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [i_4])) * (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_7 [i_2] [i_3 + 1])))) : (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_4]))))), (max((((((/* implicit */int) var_2)) * (((/* implicit */int) arr_3 [i_3] [i_3 - 2])))), (((/* implicit */int) var_2))))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((_Bool) (-(280375465082880LL)));
                }
            } 
        } 
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) (unsigned short)19313)))) : ((~(((/* implicit */int) var_9)))))))));
        arr_14 [(short)9] = ((/* implicit */short) ((unsigned char) min((-280375465082860LL), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_7)) : (((((((/* implicit */long long int) ((/* implicit */int) (short)3187))) == (-280375465082874LL))) ? (((((/* implicit */_Bool) 280375465082859LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46859))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5])) : (var_7)))))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) (short)-4587);
        arr_19 [i_5] [i_5] = ((/* implicit */short) (-((+(((/* implicit */int) var_2))))));
        var_15 = ((/* implicit */_Bool) ((max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)52863)) : (((/* implicit */int) (short)15502)))), (((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) : (-280375465082842LL)))))))));
    }
}
