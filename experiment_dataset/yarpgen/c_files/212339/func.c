/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212339
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((int) (_Bool)1)))));
        var_21 += ((/* implicit */int) ((((/* implicit */int) (unsigned short)4227)) < (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (8)));
                            arr_11 [i_0] [i_1] [9ULL] [i_0] [19LL] = ((/* implicit */_Bool) ((long long int) -2701498246605860378LL));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            arr_12 [i_0] [i_0] = ((_Bool) -1073741824);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) ((((unsigned int) (_Bool)1)) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((6711152119500738117LL) << (((971547818333961396LL) - (971547818333961396LL))))))));
                            var_25 = ((unsigned long long int) -4611148145545275068LL);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)484)) + (15))))));
                            arr_22 [i_7] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) -645036445)) % (-2244581056112383364LL))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_0] [i_0] = ((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((((/* implicit */int) (signed char)112)) - (112))));
            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8272819108720863416LL)) || ((((_Bool)1) && (((/* implicit */_Bool) 18158513697557839872ULL))))));
        }
        arr_24 [(signed char)22] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) < (8272819108720863424LL)));
    }
    var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_17)) * (((((/* implicit */int) (unsigned short)60126)) >> (((-8272819108720863401LL) + (8272819108720863429LL))))))));
}
