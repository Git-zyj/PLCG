/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214033
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */int) max(((unsigned short)7140), (((/* implicit */unsigned short) (unsigned char)23))));
                var_12 |= (signed char)-121;
                arr_6 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((-1) ^ (var_9))))))) != (((/* implicit */int) var_10))));
                var_13 |= ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)58395))))), (((var_11) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7140)))))))) <= (((((/* implicit */unsigned long long int) ((7) / (48333829)))) ^ (var_6))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)248))));
        arr_12 [i_2] [7] = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) -48333841)) > (2312821413U)))), ((~(var_11))))) >> ((((((-2147483647 - 1)) - (-2147483589))) + (106)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), ((+(var_9)))));
        var_15 = ((/* implicit */unsigned int) -6);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_6] [i_5] [i_6] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_8)))) > (var_6)));
                        arr_24 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */signed char) var_5);
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_28 [i_3] [i_7] [i_6] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))));
                            arr_29 [i_3] [i_6] [i_3] = ((/* implicit */_Bool) ((var_11) ^ (((/* implicit */long long int) (~(var_9))))));
                            var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(1497622074U)))) ? (((/* implicit */int) (unsigned short)16383)) : ((~(((/* implicit */int) var_7))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_1))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_6))));
                            arr_33 [i_3] [2LL] [i_4] [i_6] [i_8] |= ((/* implicit */unsigned short) (+(((int) 665732970958567792LL))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_36 [i_3] [i_3] [i_5] [i_6] [(signed char)10] = var_9;
                            arr_37 [i_3] [11] [11] [i_3] = ((short) ((var_8) | (((/* implicit */int) (signed char)-41))));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */long long int) (-(max((422183062), (((((/* implicit */int) var_3)) | (-48333814)))))));
        arr_41 [i_10] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_5)))), (((-1347742616) % (var_8)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 48333841)))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)58377))))), (5952694731640530094ULL)))));
        var_19 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)27632)) > (-1064090560)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 48333828)))))))));
        var_20 = ((/* implicit */unsigned int) var_7);
    }
    var_21 = ((int) (-(48333834)));
}
