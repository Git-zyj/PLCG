/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243070
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
    var_13 = (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126)))))));
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) 9071437810929683082LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-109))))) : ((-(((/* implicit */int) (unsigned short)40803)))))) / ((-(((/* implicit */int) ((unsigned short) var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) (signed char)108)) / (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_2);
                    var_18 -= ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_6]))));
                                var_19 = ((/* implicit */_Bool) arr_17 [i_1] [(signed char)12] [i_5] [i_6] [11LL] [i_5]);
                                var_20 = (+(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) + (2251799813423104LL))));
                                var_21 = ((/* implicit */unsigned char) ((_Bool) -3837500692996714407LL));
                                var_22 -= ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    arr_25 [i_1] [i_1] = ((/* implicit */long long int) (((!(((_Bool) var_0)))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) -3887527960438827678LL)))), ((!(((/* implicit */_Bool) arr_10 [i_1]))))))) : (((((/* implicit */int) arr_2 [(_Bool)1] [i_4])) >> (((((long long int) 4784625701481751778LL)) - (4784625701481751765LL)))))));
                    arr_26 [i_5] [i_1] [i_1] = ((/* implicit */short) -8228358755199073683LL);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) <= (((long long int) (short)-9331))));
                }
            } 
        } 
        arr_27 [i_1] |= var_12;
    }
}
