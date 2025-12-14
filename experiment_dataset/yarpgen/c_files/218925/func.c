/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218925
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
    var_12 = ((/* implicit */_Bool) ((var_3) / ((~(8158989345146216310ULL)))));
    var_13 = ((unsigned short) ((unsigned short) var_8));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [23] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 8158989345146216310ULL))))) % ((~(((/* implicit */int) ((unsigned char) var_5)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [23ULL] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) 3062562217U)) ? (var_5) : (10287754728563335294ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))))));
                        arr_14 [i_2] = ((/* implicit */_Bool) 11007248222388486604ULL);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) var_2);
                    var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) % (12707389829064185656ULL))))) >= (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)70))))) % (max((var_5), (arr_18 [i_5] [i_5] [i_4] [i_0])))))));
                    arr_20 [i_0] [i_4] [(signed char)7] = ((/* implicit */unsigned long long int) min((((unsigned short) 11007248222388486604ULL)), (((/* implicit */unsigned short) ((short) 6356092826320074982ULL)))));
                    var_16 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((-7587088832277346921LL), (((/* implicit */long long int) (unsigned short)60822))))) ? ((+(10323363434605641821ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((unsigned short)11401), (((/* implicit */unsigned short) (signed char)-126))))), (((((/* implicit */_Bool) 238225901)) ? (1232405079U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7806)))))));
                        arr_26 [i_0] [i_4] [i_0] [i_6] [21U] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_15 [i_0] [i_5])))));
                    }
                }
            } 
        } 
        arr_27 [i_0] [i_0] = ((/* implicit */short) ((_Bool) (unsigned short)39195));
    }
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 23; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) (-((-(var_10)))));
                                arr_40 [i_9] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (501085100U)))) < (18148958832923933839ULL))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)6745)) * (((/* implicit */int) (unsigned char)33))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17672))))) ? (((/* implicit */int) (unsigned short)51232)) : (((/* implicit */int) ((short) var_3)))))))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */short) (signed char)70);
                }
            } 
        } 
    } 
}
