/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211212
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)60)) && (((/* implicit */_Bool) (signed char)-69))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))));
                var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-61))))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_2 [(unsigned short)10]) : (((/* implicit */unsigned long long int) 8223039133526437622LL)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        arr_9 [(signed char)19] [i_2 + 2] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) == ((~(((((/* implicit */_Bool) arr_7 [i_2])) ? (522611701045436089LL) : (((/* implicit */long long int) var_1))))))));
        var_11 |= ((/* implicit */signed char) ((((/* implicit */int) max((((arr_8 [i_2 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))), (((((/* implicit */unsigned int) -1120236476)) < (arr_8 [8U])))))) >> (((287104476244869120LL) - (287104476244869119LL)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_12 &= ((/* implicit */unsigned short) (-(var_9)));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) arr_0 [i_3]))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)60)) == (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] = var_3;
        var_15 = ((/* implicit */unsigned long long int) arr_8 [i_4]);
    }
}
