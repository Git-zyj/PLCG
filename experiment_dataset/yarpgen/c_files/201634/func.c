/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201634
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) -847390982);
                    arr_7 [(short)8] [i_1] &= ((/* implicit */short) min((min((min((3495484559U), (3524459758U))), (3524459758U))), (min((((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0))))), (min((((/* implicit */unsigned int) (signed char)-95)), (799482737U)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) 1699901134)), (3495484559U)));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                arr_14 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)96)), (799482736U)));
                var_18 += ((/* implicit */unsigned short) 9626485915565942961ULL);
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */short) max((1699901134), (((/* implicit */int) min(((unsigned char)166), (((/* implicit */unsigned char) (signed char)19)))))));
                            var_19 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)166)), (1699901134)));
                            arr_21 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned short) 185137639);
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = 318916;
                        }
                    } 
                } 
                arr_23 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) max((-1242435425), (((/* implicit */int) (unsigned char)160))));
            }
        } 
    } 
}
