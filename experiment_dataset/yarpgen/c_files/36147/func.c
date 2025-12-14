/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36147
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
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 2] = ((/* implicit */unsigned short) ((min((1969520888579030618ULL), (((/* implicit */unsigned long long int) 2444645638236834342LL)))) > (min((16477223185130521001ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                var_16 = ((/* implicit */unsigned int) (~((-(16477223185130520997ULL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_17 *= ((/* implicit */short) (unsigned short)51515);
        var_18 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))));
        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) -878182738))));
    }
    var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */short) min(((_Bool)1), ((_Bool)1)))), ((short)4683))), (((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)44578)))))))));
    var_21 = ((/* implicit */unsigned int) min((min((min((1969520888579030618ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (1969520888579030618ULL))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (short)-29207)), (16477223185130520993ULL)))))));
}
